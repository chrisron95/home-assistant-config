# Changelog

Might as well start a changelog for everything I'm doing in here. Starting at v1 where I'm at now.

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