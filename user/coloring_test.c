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

typedef struct val_data
{
  int RED_SCREEN;
  int BLUE_SCREEN;
  int GREEN_SCREEN;
  int start_color;
  int start_screen;
}val_data;
struct val_data data;

// need for test
void print_color(void)
{
  printf(BOLD     "TEST BOLD\n"   RESET);
  printf(RED      "TEST RED\n"    RESET);
  printf(GREEN    "TEST GREEN\n"  RESET);
  printf(YELLOW   "TEST YELLOW\n" RESET);
  printf(BLUE     "TEST BLUE\n"   RESET);
  printf(MAGENTA  "TEST MAGENTA\n" RESET);
  printf(CYAN     "TEST CYAN\n"   RESET);
  printf(WHITE    "TEST WHITE\n"  RESET);

  // bright colors
  printf(BRIGHT_BLACK     "TEST BRIGHT BLACK\n"     RESET);
  printf(BRIGHT_RED       "TEST BRIGHT RED\n"       RESET);
  printf(BRIGHT_GREEN     "TEST BRIGHT GREEN\n"     RESET);
  printf(BRIGHT_YELLOW    "TEST BRIGHT YELLOW\n"    RESET);
  printf(BRIGHT_BLUE      "TEST BRIGHT BLUE\n"      RESET);
  printf(BRIGHT_MAGENTA   "TEST BRIGHT MAGENTA\n"   RESET);
  printf(BRIGHT_CYAN      "TEST BRIGHT CYAN\n"      RESET);
  printf(BRIGHT_WHITE     "TEST BRIGHT WHITE\n"     RESET);

}

void color_test(void)
{

  /*
   * when the test are working, this should be 1.
   * but when not working, also shoul be must 0.
   * just control and debuging.
   */

  data.start_color = 0; // not start

  printf(" TEST STARTING...\n");
  print_color();

}

void screen_test(void)
{
  data.RED_SCREEN   = 0;
  data.BLUE_SCREEN  = 0;
  data.GREEN_SCREEN = 0;

  // RGB TEST
  // RED
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
      printf(RED "█" RESET);
  }

  // GREEN
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
      printf(GREEN "█" RESET);
  }

  // BLUE
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
      printf(BLUE "█" RESET);
  }

  // debug
  data.RED_SCREEN   = 1;
  data.GREEN_SCREEN = 1;
  data.BLUE_SCREEN  = 1;
  data.start_screen = 1;

  printf(" COLOR TEST IS OK!\n");
  printf("DEBUG: \n");
  printf("RED_SCREEN = %d\n",   data.RED_SCREEN);
  printf("GREEN_SCREEN = %d\n", data.GREEN_SCREEN);
  printf("BLUE_SCREEN = %d\n",  data.BLUE_SCREEN);
}

int main(int argc, char *argv[])
{
  color_test();
  screen_test();
  printf("\nWorking!\n");
  exit(0);
}
