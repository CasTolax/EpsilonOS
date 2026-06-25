/*
    Computers cannot generate random numbers. Therefore,
    when we combine the numbers and results we collect
    from the system, perform calculations on them, and
    then shuffle them together, it will appear as though
    we have actually generated random numbers. While this
    makes sense, there is always a possibility of getting
    the same number, and this should not be overlooked.

    By CasTolax 2026
*/



#include "types.h"
#include "random.h"
#include "stat.h"
#include "proc.h"

uint ticks;

// variables and datas
typedef struct
{
  int getpid_num;
  int getticks_num;

}random_data;

int random(void)
{
  int x;
  int y;
  int a = 1073094;
  int b = 5028523;
  int calc;
  random_data data;

  // reset
  data.getpid_num = 0;
  data.getticks_num = 0;

  data.getticks_num = ticks;
  data.getpid_num = myproc()->pid;

  x = data.getpid_num;
  y = data.getticks_num;

  calc = (a * b * x * y);

  return calc;

}

int randUltra(void)
{

}

int rand_main(void)
{
  random();
  randUltra();
  return 0;
}
