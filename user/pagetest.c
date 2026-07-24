

#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/pages.h"
#include "user.h"


int upagetest(void)
{
  pagetest();
  return 0;
}

int main (int argc, char *argcv[])
{
  upagetest();
  printf("working good! userspace \n");

  return 0;
}
