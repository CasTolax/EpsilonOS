

#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "riscv.h"
#include "spinlock.h"
#include "proc.h"
#include "defs.h"

#include "core.h"

uint64 d_hart_status(void)
{
  int y = r_mstatus();
  return y;
}

uint64 d_hartid(void)
{
  int x = r_mhartid();
  return x;
}
