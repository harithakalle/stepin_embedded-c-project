/**
 * @file TempSensorActivity2.h
 * @author Haritha
 * 
 */
#ifndef _TempSensorActivity2_h_
#define _TempSensorActivity2_h_

/**
 * @brief Reading the analog input and returning a digital 8bit value
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);
void InitADC(); 
#endif /** __TempSensorActivity2_h_ */