/*
    By CasTolax 2026
*/

#include "kernel/types.h"
#include "user.h"

// test
int x;
int y;
int z;

int test_pass(void)
{
  x = dominus();
  y = tiro();
  z = usor();
  
  printf("dominus  Its work! %d\n",x);
  printf("usor its work! %d\n",y);
  printf("tori its work %d\n",z);
 
  return 0;
}

int main(int argc, char *argcv[])
{
  test_pass();
  exit(0);
}
