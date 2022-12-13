#ifndef __UNIX__THREADS__HEADER
#define __UNIX__THREADS__HEADER__

#include <pthread.h>

typedef pthread_mutex_t* LOCK;
/* Local ( one process  ) locks */

LOCK sys_create_lock ();
void sys_acquire_lock( LOCK lock );
void sys_release_lock( LOCK lock );
void sys_destroy_lock( LOCK lock );

/* TODO : thread apis mapping */

#endif /* __UNIX__THREADS__HEADER__ */


