/*
    When the user type TEST, console type TEST: OK!
    
*/

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h" 

// calculate test variables
struct data_d{
 int A;
 int B;
 int result; 
};
struct data_d d;

int main(int arg, char *argv[])
{
  test();
  exit(0);
}

int test(void)
{
  struct data_d d;
  d.A = 1;
  d.B = 1;

  d.result = d.A + d.B;
  printf("result calculate = %d\n ",d.result);

  printf("TEST OK!\n");  
  exit(0);
}

