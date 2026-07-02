/*
 *
 * For Userland
 *
 * But please check the files: kernel/usage.c and header
 *
 * By CadTolax
 */

#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/usage.h"
#include "user.h"

// someting is wrong
int user_usage(void)
{
  int x;
  x = usage();
  printf("CPU USAGE =  %d\n",x);
  return 0;
}

// just test(theoretically).
int cusage_ctrl(void)
{
  int x;
  x = usage();

  if(x >= 50)
    printf("Need calm down\n");
  else
   printf("normal CPU usage\n");

  return 0;
}

int main(int argc, char *argv[])
{
  user_usage();
  cusage_ctrl();
  exit(0);
}
