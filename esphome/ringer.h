#include "esphome.h"

class MyCustomComponent : public PollingComponent, public CustomAPIDevice {
  public:
    // constructor
    unsigned long tickperiod = 1000UL / (((unsigned long)20) * 2);
    MyCustomComponent() : PollingComponent(tickperiod) {}

    // #define HB_IN1 25
    // #define HB_IN2 26
    #define BM_PIN 25
    #define HB_LED 2

    int ringMode;
    // 0 - Off
    // 1 - Normal
    // 2 - Chirp Twice

    int hb_in;
    int counter;

    // Normal ring settings
    int sec_on = 3;
    int sec_off = 4;
    int on_count = (1000 / tickperiod) * sec_on;
    int off_count = (1000 / tickperiod) * sec_off;
    int total_count = on_count + off_count;

    // Chirp Settings
    int chirpCount = 2;
    int chirpCounter;
    int chirpTicks = 200 / tickperiod;

    // Home Assistant Services
    void ring() {
      ESP_LOGD("custom", "Ringer Started");
      ESP_LOGD("custom", "Tick period: %lu", tickperiod);
      ringMode = 1;
    }

    void chirp() {
      ESP_LOGD("custom", "Chirping");
      ringMode = 2;
    }

    void stopRing() {
      ESP_LOGD("custom", "Ringer Stopped");
      ringMode = 0;
    }

    // Actual Ringing
    void ringTick() {
      // The two pins are always opposites to each other
      // digitalWrite(HB_IN1, hb_in);
      // digitalWrite(HB_IN2, !hb_in);

      // Toggle the setting for next time
      hb_in = !hb_in;
    }

    void stopTicking() {
      // digitalWrite(HB_IN1, LOW);
      // digitalWrite(HB_IN2, LOW);
      digitalWrite(BM_PIN, LOW);
      hb_in = LOW;
    }

    void setup() override {
      pinMode(BM_PIN, OUTPUT);
      pinMode(HB_LED, OUTPUT);
      // pinMode(HB_IN1, OUTPUT);
      // pinMode(HB_IN2, OUTPUT);

      digitalWrite(BM_PIN, LOW);
      digitalWrite(HB_LED, LOW);
      // digitalWrite(HB_IN1, LOW);
      // digitalWrite(HB_IN2, LOW);

      ringMode = 0;
      hb_in = LOW;
      counter = 0;
      chirpCounter = 0;

      register_service(&MyCustomComponent::ring, "ring");
      register_service(&MyCustomComponent::chirp, "chirp");
      register_service(&MyCustomComponent::stopRing, "stop_ring");
    }
    
    void update() override {
      switch (ringMode) {
        case 0: // Off
          stopTicking();
          counter = 0;
          break;

        case 1: // Normal
          if (counter < on_count) {
            digitalWrite(BM_PIN, HIGH);
            ringTick();
            counter ++;
          } else if (counter >= on_count && counter < total_count) {
            stopTicking();
            counter ++;
          } else {
            counter = 0;
          }
          ESP_LOGV("custom", "Ringer: %i", hb_in);
          break;

        case 2: // Chirp Twice
          if (counter < chirpTicks) {
            digitalWrite(BM_PIN, HIGH);
            ringTick();
            counter ++;
          } else if (counter >= chirpTicks && counter < (chirpTicks * 2)) {
            stopTicking();
            counter ++;
          } else {
            if (chirpCounter < (chirpCount - 1)) {
              chirpCounter ++;
            } else {
              chirpCounter = 0;
              ringMode = 0;
            }
            counter = 0;
          }
          break;
      }

      digitalWrite(HB_LED, hb_in);
    }
};

class MyCustomSwitch : public Component, public Switch {
 public:
  void setup() override {
    // This will be called by App.setup()
    pinMode(26, OUTPUT);
  }
  void write_state(bool state) override {
    // This will be called every time the user requests a state change.

    digitalWrite(26, state);

    // Acknowledge new state by publishing it
    publish_state(state);
  }
};