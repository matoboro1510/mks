/*
 * sct.h
 *
 *  Created on: Oct 12, 2023
 *      Author: 208436
 */

#ifndef INC_SCT_H_
#define INC_SCT_H_
#include "main.h"

//function prototypes
void sct_init(void);
void sct_led(uint32_t value);
void sct_value(uint16_t value,uint8_t led);
#endif /* INC_SCT_H_ */
