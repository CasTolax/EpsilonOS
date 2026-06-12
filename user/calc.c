/*
  The user will simply type “calculator” into the console,
  enter the desired operation, and then select it.
  For other operations, the operation selected by the
   user will be executed and then stop.
*/

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

struct data_of_var_d {
  int A;
  int B;
  int result;
};
struct data_of_var_d d;

struct errors_e {
    int zero_div; // if yes, 1. or if no? then 0
};
struct errors_e e;

int add(int A, int B)
{
  A = d.A;
  B = d.B;

  // TEST
  A = 12;
  B = 34;
  
  return A + B;
  exit(0);
}

int calculator(void)
{
  printf("TEST OK!\n");
  exit(0);
}

int main(int arg, char *argv[])
{

  struct data_of_var_d d;

  d.A = 12;
  d.B = 34;
  int result = d.A + d.B;
  
   // int result = add(d.A,d.B);
  printf("result = %d\n",result);
  printf("calc test OK!\n");
  calculator();
  exit(0);
}
