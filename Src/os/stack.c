/*
 * stack.c
 *
 *  Created on: 2019. 10. 7.
 *      Author: kangc
 */
#include "os.h"


/**
* @brief
* @retval
*/
void stack_reset(void)
{
  register unsigned int *dst;

  dst = (unsigned int *)&stack_space;

  while (dst < &_end_stack)
  {
    *dst = 0xFFFFFFFF;
    dst++;
  }
}

