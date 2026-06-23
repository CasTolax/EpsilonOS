/*
  The user will simply type “calculator” into the console,
  enter the desired operation, and then select it.
  For other operations, the operation selected by the
   user will be executed and then stop.
*/

#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/color.h"
#include "user.h"

struct data_of_var_d {
  int A;
  int B;
};
struct data_of_var_d d;

// Operations
// add,sub,div,mul,mod
int add(int A, int B)
{
  return A + B;
  exit(0);
}

int sub(int A, int B)
{
  return A - B;
  exit(0);
}

int mul(int A, int B)
{
  return A * B;
  exit(0);
}

int div(int A, int B)
{
  // zero error handling
  // if user input zero, then codes will be
  // not process div. So? user not will input zero! (I think...).
  if(A == 0 || B == 0)
  {
    printf(RED "You can not divide with zero!(0) \n" RESET "\n");
  }
  else
  {
    return A / B;
  }
  exit(0);
}

// reading users input
int readint(void)
{
  char buf[32];
  int n = read(0, buf,sizeof(buf)-1);

  if(n <= 0)
    return 0;

  buf[n] = '\0';
  return atoi(buf);
  exit(0);
}

// Yes, it’s time to build a calculator suitable for this operating system...
// As I look over the code, I can already foresee that I’ll run into
// some minor difficulties, but every programmer has to go through this.
// Now, there’s a function called `read()` that allows us to
// retrieve information from the user. Without standard C,
// this is actually a bit difficult—though not impossible.
// When writing code using this function, pay close attention to the code’s readability!
int calculator(void)
{
  // the data
  struct data_of_var_d d;

  int A;
  int B;

  d.A = 0;
  d.B = 0;

  A = d.A;
  B = d.B;

  // user select the operations
  int user;

  printf("Please select the operations...\n");
  printf("Add 1, sub 2, mul 3, div 4: ");
  user = readint();

  switch (user) {
  case 1:
    printf("A = ");
    A = readint();

    printf("B = ");
    B = readint();

    printf("result = %d\n",add(A,B));
    break;

  case 2:
     printf("A = ");
     A = readint();

     printf("B = ");
     B = readint();

     printf("result = %d\n", sub(A,B));
     break;

  case 3:
     printf("A = ");
     A = readint();

     printf("B = ");
     B = readint();

     printf("result = %d\n",mul(A,B));
     break;

  case 4:
     printf("A = ");
     A = readint();

     printf("B = ");
     B = readint();

     printf("result = %d\n",div(A,B));
     break;

  default:
    printf(RED "You can select only 1-2-3-4 !\n" RESET "\n");
    break;
  }

  exit(0);
}

int main(int arg, char *argv[])
{
  calculator();
  exit(0);
}
