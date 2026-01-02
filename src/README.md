# Source files (src)

This directory contains C source files for the ADAS project. Implementations for sensors, vehicle logic, warnings and the main program live here.

Add `.c` files for features and keep implementations small and testable. Do not commit build artifacts (binaries, object files) to this folder — use a `.gitignore` to exclude them.

Example files:
- main.c
- sensor.c
- vehicle_logic.c
- warning.c
- seatbelt.c
