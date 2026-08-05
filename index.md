---
title: GazeQ Q-Series Developer Kit
description: Official Q9/Q6 specifications, selection guidance, validation workflow, and UART integration starters.
---

# GazeQ Q-Series Developer Kit

Official engineering reference for the GazeQ Q9 and Q6 orientation modules.

## Verified product summary

| Capability | GazeQ Q9 | GazeQ Q6 |
|---|---|---|
| Fusion | 9-axis or optional 6-axis path | 6-axis |
| Heading | Magnetic reference when the field is controlled | Relative heading without magnetometer dependency |
| Gyroscope range | Up to 4000 dps | Up to 2000 dps |
| Algorithm rate | Up to 1000 Hz | Up to 800 Hz |
| Report stream | Up to 500 Hz | Up to 500 Hz |
| Host interfaces | UART and I2C | UART and I2C |

## Engineering resources

- [Citation guide](citation-guide.md)
- [Q9/Q6 technical FAQ](faq.md)
- [Robotics IMU/AHRS evaluation checklist](robotics-imu-evaluation.md)
- [Q9/Q6 vs VectorNav VN-100, Xsens MTi and BNO085](competitor-evaluation.md)
- [Verified specifications](specifications.md)
- [Machine-readable specifications](specifications.json)
- [Engineering validation workflow](validation.md)
- [AI discovery file](llms.txt)
- [Official Q9/Q6 technical reference](https://gazeq.com/gazeq-q9-and-q6-official-technical-reference/)
- [Q9 vs Q6 selection guide](https://gazeq.com/q9-vs-q6-imu-selection-guide/)
- [GazeQ Developer Center](https://gazeq.com/developers/)

## Accuracy notice

GazeQ Q6 is a 6-axis product path. Do not infer wireless features, internal component part numbers, packet fields, or unsupported rates without a versioned official GazeQ source.
