/*
 * read the user data.
 *
 */


#include "kernel/types.h"
#include "kernel/whoami.h"
#include "user.h"

void userdata(void)
{
  printf("You have must be Tiro! \n");
  printf("enter the user name and password.\n");

  int n;
  char password[8]; // user password
  char username[8]; // user name

  read(0,username,sizeof(username));

  printf("user name = ");
  for(int i = 0; i < 8 && username[i] != '\0'; i++)
  {
    printf("%c",username[i]);
  }
  printf("\n");


  // Thanks, Claude AI but, WHAT THE HELL IS THIS?
  // WHY THE CODES READ SO DIFFICULT?
  // ...
  n = read(0, password, sizeof(password) - 1); // get the input from user
    password[n] = '\0';
    int value = 0;
    for(int i = 0; i < n; i++) {
      if (password[i] < '0' || password[i] > '9')
        continue;
      value = value * 10 + (password[i] - '0');
    }
    printf("Password = %d\n", value);

}

int main(void)
{
  userdata();
  exit(0);
}
