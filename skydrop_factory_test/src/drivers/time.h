
#ifndef TIME_H_
#define TIME_H_

#include "../skydrop.h"

uint32_t datetime_to_epoch(uint8_t sec, uint8_t min, uint8_t hour, uint8_t day, uint8_t month, uint16_t year);

void time_from_epoch(uint32_t epoch, uint8_t * psec, uint8_t * pmin, uint8_t * phour);
void datetime_from_epoch(uint32_t epoch, uint8_t * psec, uint8_t * pmin, uint8_t * phour, uint8_t * pday, uint8_t * pwday, uint8_t * pmonth, uint16_t * pyear);

void print_datetime(uint32_t epoch);

extern uint8_t monthDays[12];

#endif
