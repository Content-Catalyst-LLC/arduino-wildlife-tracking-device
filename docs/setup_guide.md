# Setup Guide

## Purpose

This guide explains how to assemble and test the Arduino Wildlife Tracking Device prototype.

## Wiring Overview

### GPS Module

- GPS VCC → Arduino 5V
- GPS GND → Arduino GND
- GPS TX → Arduino RX pin (software serial)
- GPS RX → Arduino TX pin (software serial)

### MicroSD Module

- VCC → 5V
- GND → GND
- MOSI → pin 11
- MISO → pin 12
- SCK → pin 13
- CS → pin 10

## Build Steps

1. Connect the GPS module to the Arduino
2. Connect the microSD module over SPI
3. Insert a formatted microSD card
4. Upload `wildlife_tracker.ino`
5. Open the Serial Monitor at `9600` baud
6. Move the device outdoors or near a strong GPS signal area
7. Confirm that coordinates are printed and logged

## Validation

Before relying on the prototype, verify:

- the GPS module acquires a valid fix
- coordinates update consistently
- the SD card logs data correctly
- power supply remains stable during logging
