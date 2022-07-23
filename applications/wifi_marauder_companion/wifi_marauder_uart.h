#pragma once

#include "furi_hal.h"

typedef struct WifiMarauderUart WifiMarauderUart;

void wifi_marauder_uart_set_handle_rx_data_cb(WifiMarauderUart* uart, void (*handle_rx_data_cb)(uint8_t *buf, size_t len, void* context));
void wifi_marauder_uart_tx(uint8_t *data, size_t len);
WifiMarauderUart* wifi_marauder_uart_init();
void wifi_marauder_uart_free(WifiMarauderUart* uart);