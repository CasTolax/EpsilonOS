/*
    When the user type TEST, console type TEST: OK!
    and calculate test!

*/

#include "kernel/types.h"
#include "kernel/bool.h"
#include "kernel/stat.h"
#include "kernel/color.h"
#include "user.h"

int cpt(void); // Color Print Test

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
  cpt();
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

  printf("bool test\n");
  int my_bool = false;
  printf("bool controle = %d\n ",my_bool);
  my_bool = true;
  printf("bool controle = %d\n ",my_bool);
  return 0;
}
int cpt(void)
{
  printf(RED      "TEST" RESET "\n");
  printf(BLUE     "TEST" RESET "\n");
  printf(MAGENTA  "TEST" RESET "\n");
  printf(BOLD     "TEST" RESET "\n");

  printf(BRIGHT_MAGENTA     "TEST" RESET "\n");
  printf(BRIGHT_BLUE     "TEST" RESET "\n");
  printf(BRIGHT_RED     "TEST" RESET "\n");
  printf(BRIGHT_YELLOW     "TEST" RESET "\n");
  return 0;
}
