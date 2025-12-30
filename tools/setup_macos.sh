#!/usr/bin/env bash
brew install arduino-cli
arduino-cli config init || true
arduino-cli core update-index
arduino-cli core install arduino:avr
arduino-cli lib install Keyboard
