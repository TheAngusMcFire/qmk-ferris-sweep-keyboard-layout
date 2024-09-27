// Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>
// SPDX-License-Identifier: GPL-2.0+

#pragma once

// Good defaults for home row modifiers
#define TAPPING_TERM 150
#define QUICK_TAP_TERM 0

// Handle master/slave detection on low cost Promicro
#ifdef __AVR__
#    define SPLIT_USB_DETECT
#endif
