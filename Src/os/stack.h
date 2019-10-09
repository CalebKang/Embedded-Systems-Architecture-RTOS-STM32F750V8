/*
 * stack.h
 *
 *  Created on: 2019. 10. 5.
 *      Author: kangc
 */

#ifndef OS_STACK_H_
#define OS_STACK_H_

#define STACK_SIZE  (256)

struct stack_frame
{
  uint32_t r0, r1, r2, r3, r12, lr, pc, xpsr;
};

struct extra_frame
{
  uint32_t r4, r5, r6, r7, r8, r9, r10, r11;
};

extern void stack_reset(void);

extern unsigned int _stored_data;
extern unsigned int _start_data;
extern unsigned int _end_data;
extern unsigned int _start_bss;
extern unsigned int _end_bss;
extern unsigned int _end_stack;
extern unsigned int _start_heap;
extern unsigned int stack_space;


#endif /* OS_STACK_H_ */
