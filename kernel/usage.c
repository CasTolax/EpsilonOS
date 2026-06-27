/*
 * The system will calculate the CPU's overall usage.
 *  Although it won't be completely accurate,
 * I'm sure it will provide an estimate.
 *
 * By CasTolax 2026
 */

#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "riscv.h"
#include "spinlock.h"
#include "proc.h"
#include "defs.h"


uint64 usage(void)
{
  struct cpu *c = mycpu();

  int get_usage;

  get_usage = 100 * c->getbusyticks / (c->getbusyticks + c->getidleticks);

  return get_usage;

}
