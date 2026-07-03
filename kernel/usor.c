/*
  by CasTolax 2026
*/

#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "riscv.h"
#include "defs.h"
#include "proc.h"

#include "whoami.h"

struct who_am_t e;

uint64 usor(void)
{
  int check;
  int usor = e.usor;

  e.id_status = 3;
  usor = e.userid = 0;

  switch (e.id_status) {
  case 3:
    if(e.id_status == usor)
    {
      printf("User Promoted.\n");
      usor = 3;
    }
    else
    {
      printf("Title required [Usor]\n");
      usor = 0;
      e.id_status = 0;
    }
    break;
    default:
    check = 1;
    printf("DEBUG check status = %d\n",check);

  }
  return 0;
}
