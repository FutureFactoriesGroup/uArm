#ifndef _UARM_IIC_H_
#define _UARM_IIC_H_

#include "uarm_common.h"

void angle_iic_init(void);
void iic_write_byte(uint8_t channel, uint8_t dev_addr, uint8_t write_addr, uint8_t write_data);
uint8_t iic_read_byte(uint8_t channel, uint8_t dev_addr, uint8_t read_addr);

#endif

