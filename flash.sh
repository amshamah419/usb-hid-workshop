#!/usr/bin/env bash
set -e
FQBN="arduino:avr:leonardo"
PAYLOAD_DIR="$1"
arduino-cli compile --fqbn "$FQBN" "$PAYLOAD_DIR"
arduino-cli board list
read -p "Enter port (e.g. /dev/cu.usbmodemXXXX): " PORT
arduino-cli upload --fqbn "$FQBN" -p "$PORT" "$PAYLOAD_DIR"
