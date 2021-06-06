/*
 * STM32 Nucleo boards emulation.
 *
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 */


#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qemu-common.h"
#include "qemu/log.h"

#include "hw/arm/stm32-mcus.h"
#include "hw/display/gpio-led.h"
#include "hw/arm/cortexm-helper.h"

/*
 * This file defines several STM32 Nucleo boards.
 */

/* ----- ST NUCLEO-F103RB ----- */

#if 0
static GPIOLEDInfo nucleo_f103rb_leds_info[] = {
    {
        .name = "green-led",
        .active_low = false,
        .colour_message = "Green",
        .x = 277,
        .y = 271,
        .w = 8,
        .h = 6,
        .gpio_path = "/machine/mcu/stm32/gpio[a]",
        .port_bit = 5, },
    { }, /**/
};
#endif
