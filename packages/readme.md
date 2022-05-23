<h1 align="center">
Chris Heder
<br>
Home Assistant Packages
</h1>

---

Welcome to my packages! Ever since I learned about packages in Home Assistant, they're my new favorite way to stay organized. They're super easy to use, as long as you don't mind working in YAML. The only caveat I've found is that it makes debugging a bit difficult because error messages don't know where to look. I'm hoping that one day in the future, Home Assistant will get better error logging that works with packages.

This readme is a brief description of each of my package files. Hopefully this makes it easy for you to navigate. Some are still a work in progress, others are pretty well complete. But to be fair... is anything ever truly complete? Always room for improvement!

---

## alexa_overrides.yaml
This is where I define the input_buttons that get pressed by Alexa routines. This allows me to have a routine in Alexa where I can say a few different variations of "What's the weather?" and it'll press the button in HA, which then triggers an automation where J.A.R.V.I.S. announces the weather on the room you're in. And... doesn't suggest any random stupidity afterwards! What a concept!

Now, this still has a ways to go because it's currently _just_ the input_buttons. But soon it will contain all of the automations to match. Just have to get around to it.

## announcements.yaml
This contains the majority of the generic notifications and everything that goes with them, such as the `welcome_briefing` script which gets triggered when someone arrives, my `time_for_bed` announcement which is just a simple "It's time for bed" announcement (and some variations) every day at 10:30pm, and my `morning_wakeup_report` which is what I wake up to on workdays. Basically just notifications that don't have a better home.

## audio.yaml
This one basically just tracks where there's presence and uses some automations to set which Alexa device to play on.

## chores.yaml
Still a work in progress. This is where I plan on having automations and scripts for chores around the house. So far I just have some simple `input_booleans` for each chore, organized with some comments.

## clock_chime.yaml
Ahhhh this one is cool. I got the original inspiration from Jeff Stone, who in turn got it from Carlo Costanzo. I added quite a few configurable options though and converted the audio to a format that works on Alexa devices and uploaded them to my AWS S3 bucket. It gives me the ability to switch between a cuckoo clock and a grandfather clock, along with the ability to enable/disable the chime entirely as well as the half hour and quarter hour tolls. And ability to set a timeframe for when it's allowed to chime.

## daily.yaml
This contains my workday and holiday sensors. It also has an automation to set my wakeup time depending on the day and if it's a holiday or an in-office day and stuff like that. Also turns it off for weekends so we can sleep in.

When I get around to it, I'll also setup some automations for some more reporting during the day. I have the templates already... just gotta actually implement them.

## database.yaml
As you'd expect... database configuration. Just sets some logging options and lets things get ignored that don't have any need to be stored in the DB. Helps keep things nice and zippy.

## fitness.yaml
Another work in progress. Nothing too exciting, currently it's just some utility meeters tracking our daily, weekly, and monthly steps from our iPhones.

## frontlights.yaml
This is where all the magic that is my front yard light show (and simple landscape lighting during the off season) happens. Anyone using FPP should take a look at how I have things implemented in here, specificly the FPP commands. This all took me a veryyyy long time to get polished, but now it works fantasticly. I still have a little work to do for the actual show scheduling as I only got this far last holiday season and was still using FPP's built in scheduler at the time. But everything's there and ready to go, so just needs a little more work before Halloween comes.

Another thing I plan to add is some more options for colors throughout the year. For now, it sets my flood lights to teal, simply because I love how it looks in my yard. But when I get around to it I'd like to have it use a different color depending on the season and/or holiday. Again, everything needed for this is there already so it should be a super simple implementation.

## homestats.yaml
Just some statistics from the house for things like lights and temperature averages. Also some things like how many lights and switches and entities total I have. As well as some useful date sensors.

## integrations.yaml
This is pretty simple, I just took some integrations out of the main configuration.yaml file and put them in here for organizational purposes. Nothing exciting.

## irrigation.yaml
I have a pretty simple drip irrigation system I installed in the front of my house that's controlled with a solenoid connected to a Sonoff Basic. I use the [Irrigation Unlimited integration](https://github.com/rgc99/irrigation_unlimited) to control it. I also have some old automations that were from before I setup Irrigation Unlimited. They're not really needed anymore, but it just gives me a notification when the irrigation completes, so not really hurting anyone. One day I'll spend a little more time in here and clean it up a bit.

## lighting.yaml
This is still a work in progress, but that said it's pretty satisfactory as it is. This is where all my motion light handlers and related entities are stored. They work mainly depending on the time of day and the ambient light of the room. But at some point I also want to factor in things like us watching a movie (so motion lights should be minimized to only give us a dim walk to the kitchen, for example). I also implemented `history_stats` for each motion sensor with the goal of increasing the accuracy of the motion sensors activating the lights. Basically something like if there was only one instance of motion for a while, don't keep the lights on. But if there's several instances of motion, keep the normal delay. Something along those lines. Not sure, project for another day.

## magic.yaml
Also a work in progress. I have some "spells" I can call from Alexa to do things like unlock the front door (when safe to do so) and turn on/off lights and stuff. Haven't played around in here for a while and still needs work, but the concept is there.

## maintenance.yaml
Some simple automations that are more on the maintenence side, naturally. Basically like what to do on HA startup, power outage notifications, and SSL certificate expiration handler. Nothing too exciting but definitely useful stuff.

## notify.yaml
Now this one... this is where I turn Alexa into J.A.R.V.I.S. among all other less exciting notifications. I got a lot of this from Jeff Stone, but adjusted it quite a bit since I only use Alexa speakers.

The particular spot I'm most proud of is my implementation of the `alexa_voice` script. That's J.A.R.V.I.S. right there. Uses the `Brian` voice as well as `fast` prosidy rate which makes him talk at a normal conversational speed. It allows me to specify the `who` and will select the matching Alexa device, as well as allows me to say `everywhere` to basically work as an announcement.

The other cool spot in here is the `status_annc` script. I added quite a few of my own announcements in here, including some sound effects that use my AWS S3 bucket to play them on the Alexas. This is cool because I now have the Jetsons theme as a doorbell (I can also switch it to a few other options of course too). Because why not.

## party.yaml
Nothing exciting... yet. So far it's basically just a house party switch, but doesn't really actually... do anything. One of these days I'll get around to making this do some actual fun stuff like set the lights, turn on music and things like that.

## presence.yaml
As you'd imagine, this is where all my presence-based automations are stored. Basically tracks who's in the house, welcomes us when we get home, friends included (that's always fun and makes them smile).

I have a little more to do here. I have [ESPresense](https://espresense.com) flashed on ESP32s in every room in the house, and that allows me to track bluetooth devices. So I'd like to implement room-based tracking which (in theory) should really help with the automatic lighting throughout the house.

## printing.yaml
This is where my 3D printer automations are. Nothing too exciting, but it gives me some notifications and performs some tasks when printing starts/ends. Also there's an automation to allow me to ask Alexa for the status of my print and have J.A.R.V.I.S. update me.

## security.yaml
This one is pretty cool. Currently it doesn't actually... you know... do much. But all the functionality is there for me to have basically my own security system built into Home Assistant. I have some door and window notification automations and it also does things like turn on/off guest mode and notify me of the state of my door lock.

One of these days, I'd like to implement the [Manual Alarm Control Panel integration](https://www.home-assistant.io/integrations/manual) that's built into HA. It seems like a very useful integration that may even eliminate (or at least simplify) a lot that's currently in here. When the day comes that I implement this, I plan on covering it in a video tutorial.

## space.yaml
Nothing too major in here but I have a sensor for the International Space Station and an alert for when it's passing overhead. Also a moon phase and rocket launch sensor.

## sysmon.yaml
Just some system tracking information. Also has some front door stats.

## weather.yaml
This is filled with all kinds of weather sensors that utilize the [AccuWeather integration](https://www.home-assistant.io/integrations/accuweather/) to give me tons of different weather statistics. The main reason I use these is for my Alexa overrides and daily updates.

## weatheralerts.yaml
Also mainly used for Alexa updates. Basically just a file provided by the [WeatherAlerts custom component](https://github.com/custom-components/weatheralerts) which notifies me when there's any alerts from the National Weather Service. Now I just need a way to ignore certain alerts. There's a rip-current warning just about every day... that I truly don't care about. Also there's some emergency alert tests that pop up from time to time. Just waiting to see one for an alien invasion...