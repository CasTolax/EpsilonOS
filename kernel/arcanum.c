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

#include "arcanum.h"

int userid;

// the users data example (for me)
char name[8] = "admin";
char pass[9] = "123";

// users check id
uint64 checkid(int id)
{
  id = userid;

  switch (id) {

  case 0:
    id = 0;
    printf("The title was rejected.\n\n");
    printf("userid -> 1[Tiro]\n\n");

    break;
  case 1:
    id = 1;
    printf("The title was accepted.\n\n");
    printf("userid -> 1[Dominus]\n\n");
    break;

    default:
      panic("Need acces to control the system. check the arcanum.c\n");
      setid(); // set the id zero
  }
  return 0;
}

// users sets id
uint64 setid(void)
{
  // set the default zero.
  userid = 0;
  return 0;
}

// call the functions or other process
uint64 arcanum(char password[9],char username[8])
{
  // it is basic, because, ı think basic like a kid.

  // set the default
  setid();

   // debug userid = 1;
  if(strncmp(username, "admin", 8) == 0 && strncmp(password, "123", 9) == 0){

      userid = 1; // set the dominus
      checkid(userid);
  }
  else{
    userid = 0;
    printf("-- access data not true. -- \n");
    checkid(userid);
  }
  return 0;
}
