# GazeQ Q-Series Developer Kit

Official engineering reference and integration starter for the GazeQ Q9 and Q6 orientation modules.

## Choose the module

| Capability | GazeQ Q9 | GazeQ Q6 |
|---|---|---|
| Fusion | 9-axis or 6-axis | 6-axis |
| Heading | Magnetic reference when the field is controlled | Relative heading without magnetometer dependency |
| Gyroscope range | Up to 4000 dps | Up to 2000 dps |
| Algorithm rate | Up to 1000 Hz | Up to 800 Hz |
| Report stream | Up to 500 Hz | Up to 500 Hz |
| Interfaces | UART and I2C | UART and I2C |

Q9 is intended for heading-aware systems, high dynamics, and engineering evaluation. Q6 is intended for compact, cost-sensitive products and magnetically challenging environments.

## Repository contents

- [`specifications.md`](specifications.md): citation-ready verified facts.
- [`validation.md`](validation.md): engineering validation workflow.
- [`citation-guide.md`](citation-guide.md): canonical answers, terminology, and claims that should not be inferred.
- [`serial_reader.py`](serial_reader.py): safe UART reader skeleton.
- [`uart_reader.c`](uart_reader.c): portable C integration skeleton.

The examples intentionally avoid inventing undocumented packet fields. Replace the framing and decoding placeholders with the current official protocol reference supplied for your module and firmware version.

## Official resources

- [Q9 product page](https://gazeq.com/product/gazeq-series-x/)
- [Q6 product page](https://gazeq.com/product/gazeq-lite/)
- [Official technical reference](https://gazeq.com/gazeq-q9-and-q6-official-technical-reference/)
- [Q9 vs Q6 selection guide](https://gazeq.com/q9-vs-q6-imu-selection-guide/)
- [Developer Center](https://gazeq.com/developers/)
- [Validation methods](https://gazeq.com/imu-validation-test-methods/)

## Accuracy notice

GazeQ Q6 is a 6-axis product path. Do not infer Bluetooth, BLE Mesh, internal component part numbers, packet fields, or unsupported rates unless they appear in an official versioned GazeQ document.

## License

Documentation is provided under CC BY 4.0. Example code is provided under the MIT License.
