# Changelog

Might as well start a changelog for everything I'm doing in here. Starting at v1 where I'm at now.

## v1.1.0 - 2022/07/28
### Added
- Added [Manual Alarm Control Panel integration](https://www.home-assistant.io/integrations/manual) as my Sentry Network
- Added an alarm alert engine in `packages/notify.yaml` that can handle both Jarvis verbal notifications as well as ios notifications, including critical and actionable alerts
- Added security groups for doors, windows, motion sensors, etc.
- Added ability to bypass doors and windows, as well as automatically bypass doors to exit
- Added alarm_triggers template sensor that shows what entities are opened. Will give a clean list that can be spoken or messaged as well as extra data in the attributes
- Added automations to `packages/security.yaml` to handle alarm breach, all different alarm states, light handling, and notifications
- Added ability to automatically arm and disarm based on authorized guest presence and door lock codes

### Changed
- Existing automations and scripts that would enable/disable sentry mode updated to use new sentry network
- Goodbye now has time conditions so somebody doesn't turn my fan off when they leave early for work...

### Removed
- Removed original sentry mode options in favor of the new sentry network


## v1.0.0 - 2022/07/01
### Added
- Groups for upstairs, downstairs, interior, exterior, and all lights
- Input boolean, automation and script for feeding Blaze a snack with Jarvis. The future is here people.

### Changed
- Updated MQTT entities in the yaml to use the new format and removed the deprecated code
- Renamed motion light handlers to smart light handlers and organized the lighting.yaml code a bit
- Merged the automation that automatically turns on the kitchen LEDs when the lights turn on, into the main kitchen smart light handler
- Changed all references of the Octoprint integration to the Octoprint MQTT integration

### Removed
- Removed unnecessary `debug_texts` script