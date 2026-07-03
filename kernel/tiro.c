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

struct who_am_t q;

uint64 tiro(void)
{

  int tiro;
  // The Tiro stage access number.
  q.id_status = 1;
  tiro = q.userid;

  int check; // check the id

  switch (q.id_status)
  {
    case 1:
      if(q.userid == tiro){
        printf("User Promoted.\n");
        tiro = 1;
      }
      else{
        printf("Title required [Tiro]\n");
        tiro = 0; // false
        break;
      }
    default:
      check = 1;
      printf("DEGUB check status = %d\n",check);
  }
  return 0;
}
