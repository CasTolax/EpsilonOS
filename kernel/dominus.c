/*
   By CasTolax 2026
*/

#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "riscv.h"
#include "defs.h"
#include "proc.h"

#include "whoami.h"

struct who_am_t a;

uint64 dominus(void)
{
  int check;
  int dominus = a.dominus;

  a.id_status = 3;
  dominus = a.userid = 0;

  switch (a.id_status) {
  case 3:
    if(a.id_status == dominus)
    {
      printf("User Promoted.\n");
      dominus = 3;
    }
    else
    {
      printf("Title required [Dominus]\n");
      dominus = 0;
      a.id_status = 0;
    }
    break;
    default:
    check = 1;
    printf("DEBUG check status = %d\n",check);

  }
  return 0;
}
