/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright 2019 NXP
 *
 * Author: Daniel Baluta <daniel.baluta@nxp.com>
 */

#ifdef __SOF_LIB_DAI_H__

#ifndef __PLATFORM_LIB_DAI_H__
#define __PLATFORM_LIB_DAI_H__

int dai_init(void);

#endif /* __PLATFORM_LIB_DAI_H__ */

#else

#error "This file shouldn't be included from outside of sof/lib/dai.h"

#endif /* __SOF_LIB_DAI_H__ */
