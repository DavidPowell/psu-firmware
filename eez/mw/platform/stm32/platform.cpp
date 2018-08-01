/*
 * EEZ Middleware
 * Copyright (C) 2018-present, Envox d.o.o.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "eez/mw/mw.h"

#include "stm32f4xx_hal.h"

////////////////////////////////////////////////////////////////////////////////

uint32_t millis() {
    return HAL_GetTick();
}

uint32_t micros() {
	return HAL_GetTick() * 1000;
}

void delay(uint32_t millis) {
	HAL_Delay(millis);
}

void delayMicroseconds(uint32_t microseconds) {
	HAL_Delay((uint32_t)ceilf(microseconds / 1000.0f));
}
