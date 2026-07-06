/*

   Arcanum is a tool that controls user permissions.
   Its main purpose is to grant permissions to a user
    who enters their password and username.
   The user types “userdata” at the terminal,
    is prompted for the required information,
    and is then granted permissions. The only
     command that does not require permissions is the “list” command.
     
   Arcanum and other names are derived from Latin.
   Arcanum means “secret,” “hidden,” “mysterious,”
   or “confidential.”

*/

#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "riscv.h"
#include "defs.h"
#include "proc.h"

// users check id
uint64 checkid(void)
{
  return 0;
}

// users sets id
uint64 setid(void)
{
  return 0;
}

// call the functions or other process
uint64 arcanum(void)
{
  checkid();
  setid();

  return 0;
}
