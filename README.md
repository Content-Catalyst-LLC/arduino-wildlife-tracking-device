# Arduino Wildlife Tracking Device

A low-power Arduino wildlife tracking device for GPS telemetry, SD card logging, and sustainability-oriented biodiversity monitoring prototypes.

This project is designed as a reproducible prototype for engineers, students, and researchers interested in embedded telemetry, environmental sensing, and conservation-oriented field systems.

## Overview

The device periodically wakes from low-power sleep mode, acquires GPS coordinates, logs them to local storage, and returns to sleep to conserve battery power.

At a systems level, the architecture can be summarized as:

GPS Module → Arduino → Data Logging → Sleep Cycle → Repeat

## Features

- GPS-based location tracking
- microSD data logging
- low-power duty cycling
- optional solar charging support
- field-oriented telemetry design
- extensible for LoRa, GSM, or additional environmental sensors

## Repository Structure

- `firmware/` — Arduino tracking firmware
- `docs/` — setup, calibration, and deployment documentation
- `data/` — example GPS logs
- `hardware/` — wiring diagrams and schematics
- `BOM.csv` — bill of materials

## Notes

This is a prototype reference design, not a certified wildlife telemetry collar. Engineers adapting it for field use should validate enclosure design, battery endurance, GPS acquisition time, and long-term environmental reliability.

## License

This project is released under the MIT License.

See `LICENSE` for details.
