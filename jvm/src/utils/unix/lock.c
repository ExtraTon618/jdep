
#include <lock.h>

/* create lock using pthreads mutex */
void lock_init(LOCK lock)
{  
   int rc = pthread_mutex_init( lock, NULL );
   assert( rc != 0 );
}

/* lock */
void lock_acquire( LOCK lock )
{
   int rc = pthread_mutex_lock( lock );
   assert( rc != 0);
}

/* unlock */
void lock_release( LOCK lock )
{
   int rc = pthread_mutex_unlock( lock );
   assert( rc != 0);
}

/* destroy lock */
void lock_destroy( LOCK lock )
{
   int rc = pthread_mutex_destroy( lock );
   assert( rc != 0 );
}