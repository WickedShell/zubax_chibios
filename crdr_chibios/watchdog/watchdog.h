/*
 * Copyright (c) 2014 Courierdrone, courierdrone.com
 * Distributed under the MIT License, available in the file LICENSE.
 * Author: Pavel Kirienko <pavel.kirienko@courierdrone.com>
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void watchdogInit(void);

int watchdogCreate(int timeout_ms);

void watchdogReset(int id);

#ifdef __cplusplus
}
#endif
