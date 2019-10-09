/*
 * semaphore.h
 *
 *  Created on: 2019. 10. 5.
 *      Author: kangc
 */

#ifndef OS_SEMAPHORE_H_
#define OS_SEMAPHORE_H_

#define MAX_LISTENERS   (4)

struct semaphore
{
  uint32_t value;
  uint8_t listeners[MAX_LISTENERS];
};

typedef struct semaphore semaphore;
typedef semaphore mutex;


static inline int sem_init(semaphore *s, int val)
{
  int i;
  s->value = val;

  for (i = 0; i < MAX_LISTENERS; i++)
    s->listeners[i] = 0;

  return 0;
}

#define mutex_init(m)     sem_init(m, 1)
#define mutex_trylock(m)  sem_trywait(m)


extern int sem_trywait(semaphore *s);
extern int sem_dopost(semaphore *s);
extern int sem_wait(semaphore *s);
extern int sem_post(semaphore *s);

extern int sem_trywait(semaphore *s);
extern int sem_dopost(semaphore *s);

#define mutex_lock(x)   sem_wait(x)
#define mutex_unlock(x) sem_post(x)

#endif /* OS_SEMAPHORE_H_ */
