#include <stddef.h>
#include <stdint.h>

/*
 * Portable UART receive skeleton. Connect gazeq_uart_read() to the target HAL.
 * Implement framing, checksum and field decoding from the official protocol
 * reference for the exact module and firmware version.
 */

extern size_t gazeq_uart_read(uint8_t *buffer, size_t capacity);

void gazeq_poll(void) {
    uint8_t buffer[256];
    const size_t received = gazeq_uart_read(buffer, sizeof buffer);
    if (received == 0) return;

    /* TODO: validate and decode one or more documented Q-Series frames. */
}
