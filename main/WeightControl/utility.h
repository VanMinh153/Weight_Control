#ifndef utility_h
#define utility_h
#include "main.h"
#include "config.h"
#include "screen.h"

void IRAM_ATTR recordISR();
void IRAM_ATTR tareISR();
void IRAM_ATTR modeISR();
void IRAM_ATTR upISR();
void IRAM_ATTR downISR();

#if defined(HW_TEMPERATURE)
float readTemperature();
#endif

#if defined(HW_RFID)
String readRFID();
#endif

void sort_(int arr[], uint8_t n, int avg);
int getData_Avg(HX711 adc);
int getData_(uint8_t allow_delay = 1);
float getWeight();
float toWeight(int data);
uint8_t sleep_(uint8_t sensitivity = 2);
uint8_t waitForWeightChange(uint16_t timeout, uint16_t time2listen = 50, uint16_t error = Absolute_error);
uint8_t waitOnInterrupt(uint32_t timeout, volatile uint8_t *isrCtl = NULL);
void setGain(hx711_gain_t gain);
#endif
