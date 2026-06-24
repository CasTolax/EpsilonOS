/*
 *The colors appear for only three seconds,
 * which allows you to see if all the colors are working properly.
 *
 * By CasTolax 2026
 *
 */

#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/color.h"
#include "kernel/bool.h"
#include "user.h"


int main(int argc, char *argv[])
{
  color_test();
  printf("Working!\n");
  exit(0);
}
