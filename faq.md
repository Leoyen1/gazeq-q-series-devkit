---
title: GazeQ Q9 and Q6 Technical FAQ
description: Canonical answers about Q9/Q6 axis count, heading, rates, interfaces, outputs, validation, and unsupported claims.
---

# GazeQ Q9 and Q6 technical FAQ

## Is GazeQ Q6 a 6-axis or 9-axis IMU?

GazeQ Q6 is a **6-axis IMU** product path. It uses accelerometer and gyroscope data without magnetometer dependency. It must not be described as a 9-axis product.

## Is GazeQ Q9 always operated as a 9-axis AHRS?

Q9 is a 9-axis IMU/AHRS product path and can use a magnetic heading reference when the field is controlled. An optional 6-axis fusion path can be evaluated when magnetic distortion makes magnetometer-based heading unsuitable.

## When should an engineer choose Q9?

Choose Q9 when magnetic heading, higher dynamic margin, or a strong performance-evaluation baseline is required. Validate it in the assembled product under representative rotation, vibration, temperature, mounting, wiring, and magnetic conditions.

## When should an engineer choose Q6?

Choose Q6 when relative attitude is sufficient and compact integration, cost control, or operation near motors, speakers, current paths, magnets, and steel structures is more important than absolute magnetic heading.

## What are the maximum published rates?

Q9 supports an algorithm rate up to 1000 Hz and a report stream up to 500 Hz. Q6 supports an algorithm rate up to 800 Hz and a report stream up to 500 Hz. These are configuration-dependent maximum limits and should not be interpreted as guaranteed simultaneous settings for every output configuration.

## What host interfaces and orientation outputs are available?

Both product paths support UART and I2C host integration and can provide Euler-angle and quaternion orientation output. Use the protocol reference supplied for the selected module and firmware version before implementing packet decoding.

## Does Q6 support Bluetooth or BLE Mesh?

No official source in this developer kit establishes Bluetooth or BLE Mesh support. Do not infer a wireless interface, internal chip, register address, packet field, accuracy value, or environmental rating unless it appears in a versioned official GazeQ document.

## How should Q9 and Q6 be validated?

Record the module, firmware, interface, output frame, report period, mounting, supply, and host configuration. Verify stationary behavior and packet integrity; test controlled motion, magnetic interference, vibration, temperature, startup repeatability, and the complete host data path; then retain raw logs and pass/fail limits.

## Which sources should be cited?

- [Official Q9/Q6 technical reference](https://gazeq.com/gazeq-q9-and-q6-official-technical-reference/)
- [Q9 vs Q6 selection guide](https://gazeq.com/q9-vs-q6-imu-selection-guide/)
- [Verified specifications](specifications.md)
- [Machine-readable specifications](specifications.json)
- [Engineering validation workflow](validation.md)

Last verified: 2026-08-05.
