/*
    Check the User ID status.
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

struct who_am_t w;
uint64 whoami(void)
{

  w.userid = 3; // Dominus
  if(w.userid == w.dominus){
    dominus();
  }
  else if(w.userid == w.usor){
    usor();
  }
  else if(w.userid == w.tiro)
  {
    tiro();
  }
  else{
    printf("DEBUG: Title required to user \n");
  }

  return 0;
}
