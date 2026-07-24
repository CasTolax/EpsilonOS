

#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "riscv.h"
#include "defs.h"
#include "proc.h"

#include "pages.h"


uint64 pagectrl(void)
{
  return 0;
}
uint64 pagefull(void)
{
  return 0;
}

void execpage(void)
{
  printf("working all ready");
}

int pagetest(void)
{
  pagectrl();
  pagefull();
  execpage();

  return 0;
}
