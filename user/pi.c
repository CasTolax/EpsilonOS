/*
    * Holy numbers, The Pi.
    * all the univers mean and prove is Pi.
    * So, The Pi numbers are holy.
    
    * By CasTolax 2026 
*/

#include "kernel/types.h"
#include "pi.h"
#include "user.h"

int pi(void)
{
  // pi
  const char pi_number[102] = "3,1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  
  for(int i = 0; i < 102; i++)
  {
    printf("%c",pi_number[i]);
  }
  printf("\n");
  return 0;
}

int test_pi(void)
{
  printf("PI NUMBERS \n");
  return 0;
}

int main(int argc, char *argcv[])
{
  test_pi();
  pi();
  exit(0);
}
