/*
 * Please check the kernel/random.c and header.
 * there an note for code reader or engineer.
 *
 * By CasTolax
 */

#include "kernel/types.h"
#include "kernel/random.h"
#include "user.h"

int rand(void)
{
  int x = random() & 0x7fffffff; // & 0x7fffffff: means, no negative numbers! -1170758690
  printf("random number = %d\n",x);
  return 0;
}

int main(int argc, char *argcv[])
{
  rand();
  exit(0);
}
