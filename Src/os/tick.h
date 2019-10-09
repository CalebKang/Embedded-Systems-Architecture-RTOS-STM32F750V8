/*
 * tick.h
 *
 *  Created on: 2019. 10. 5.
 *      Author: kangc
 */

#ifndef OS_TICK_H_
#define OS_TICK_H_

#define TIMESLICE (20)

extern void sleep_ms(int ms);
extern void tick_increase(void);

#endif /* OS_TICK_H_ */
