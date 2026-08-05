"""Minimal UART reader skeleton for a GazeQ Q-Series module.

Configure the port and baud rate from the official protocol reference for the
module and firmware version. Packet framing is intentionally left explicit.
"""

import serial


def read_frames(port: str, baudrate: int) -> None:
    with serial.Serial(port, baudrate, timeout=1) as device:
        while True:
            raw = device.readline()
            if not raw:
                continue
            # TODO: validate framing/checksum and decode documented fields.
            print(raw.hex())


if __name__ == "__main__":
    read_frames("COM3", 115200)
