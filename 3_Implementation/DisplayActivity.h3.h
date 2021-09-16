/**
 * @file DisplatActivity3.h
 * @author Haritha
 * 
 */
#ifndef __DisplayActivity3_h__
#define __DisplayActivity3_h__
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temp_value 
 * @return char
 */
char OutPWM(uint16_t temp_value);
void InitPWM(void);
#endif