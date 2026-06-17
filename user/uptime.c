/*
 * This is the tkicks every second about system...
 * When the kernel up, this functions and codes going to
 * be work and called. This is the total runtime!
 * (So, I am beginner, there is maybe fault!)
 */

// first!
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

/*
  * A simple component to check whether the clock is counting or not...
  * If it's working and counting, it will be 1; if it's not working and not counting,
  * it will be 0. It's simple, and the way it works is simple too.
 */

#define ENABLE_1 1;   // when calculate is enable == 1
#define DISABLE_0 0;  // when also calculate is disable == 0

typedef struct time_data_t
{
  int SECOND;
  int MINUTE;
  int HOUR;
}time_data_t;
typedef struct time_data_t T;

int uptime_controle(void)
{
  struct time_data_t T;

  int ticks = uptime();

  T.SECOND  = ticks     / 100;
  T.MINUTE  = T.SECOND  / 60;
  T.HOUR    = T.MINUTE  / 60;

  printf("UPTIME = \n");
  printf("%d : %d : %d\n",T.HOUR,T.MINUTE,T.SECOND);
  exit(0);
}

int main(int argc, char *argcv[])
{
  uptime_controle();
  printf("this is working!");
  exit(0);
}
