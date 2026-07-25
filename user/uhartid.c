




#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/core.h"
#include "kernel/riscv.h"

#include "user.h"

int ucore(void)
{
  hartid();
  return 0;
}

int main(int argc, char *argcv[])
{
  ucore();
  return 0;
}
