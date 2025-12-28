# USB HID Workshop (ATmega32U4 / Beetle / Leonardo)

This repository supports a hands-on workshop for learning USB HID trust boundaries using ATmega32U4 devices.

## Safety Rules
- Execute payloads **only on air-gapped demo machines**
- No malware, no persistence, no networking
- If the device behaves unexpectedly: unplug it immediately

## Quick Start (macOS)

```bash
./tools/setup_macos.sh
./tools/flash.sh payloads/01_type_message
```

## Reset / Bootloader
These boards often have no reset button.
Briefly short **RST → GND** to enter bootloader mode.
