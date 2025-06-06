/*
 * SPDX-FileCopyrightText: 2020-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "soc/timer_periph.h"

const timer_group_signal_conn_t timer_group_periph_signals = {
    .groups = {
        [0] = {
            .module_name = {
                [0] = "TIMG0T0",
            },
            .module = PERIPH_TIMG0_MODULE,
            .timer_irq_id = {
                [0] = ETS_TG0_T0_LEVEL_INTR_SOURCE,
            }
        },
    }
};
