/*
 * Who Am I?
 * By CasTolax 2026
 *
 */

#include "kernel/types.h"
#include "kernel/whoami.h"
#include "kernel/stat.h"
#include "user.h"

int whoamiU(void)
{

  int x = whoami();
  printf("userid status = %d\n",x);
  return 0;
}

int main(int argc, char *argcv[])
{
  whoamiU();
  exit(0);
}
