/*
    * Holy numbers, The Pi.
    
    * By CasTolax 2026 
*/

#include "kernel/types.h"
#include "user.h"
#include "pi.h"

int pi(void)
{
  char *pi = "3,141592653589793238462643383279"
             "5028841971693993751058209749445"
             "923078164062862089986280348253"
             "421170679";
           
  printf("The Pi numbers: \n");

  for(int i = 0;i < 102; i++)
  {
    printf("%c",pi[i]);
  }
  printf("\n");
  return 0;  
}

int main(int argc, char *argcv[])
{
  pi();
  exit(0);
}
