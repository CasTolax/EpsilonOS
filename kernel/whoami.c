/*
 * By the CasTolax 2026
 */

#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "riscv.h"
#include "defs.h"
#include "proc.h"

#include "whoami.h"
#include "arcanum.h"

// char name[8] = "admin";
// char pass[9] = "123";

uint64 whoami(void)
{

  if(userid == 1)
  {
    printf("admin\n");
  }
  if(userid == 0)
  {
    printf("Tiro\n");
  }
  else {
    printf("debug: none??");
  }

  return 0;
}
