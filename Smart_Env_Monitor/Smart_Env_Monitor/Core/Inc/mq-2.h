/*
 * mq-2.h
 *
 *  Created on: Dec 30, 2025
 *      Author: pranali
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#ifndef INC_MQ_2_H_
#define INC_MQ_2_H_
 void MX_ADC1_Init(void);
uint16_t adc_Read( void);
 extern ADC_HandleTypeDef hadc1;
#endif /* INC_MQ_2_H_ */
