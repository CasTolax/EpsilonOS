/*
 * read the user data.
 *
 */

#include "kernel/types.h"
#include "user.h"

char password[9]; // solve problem, this is need to be char not int.
char username[8];

void userdata(void)
{

  printf("enter the user name and password.\n");


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
    int n = read(0, password, sizeof(password) - 1); // get the input from user
    if(8 > n) // if user input eigth digit than bigger
    {
      printf("\n");
    }
    else{ // theoretically
      printf("You can only enter an eight-digit number\n");
    }

    if(n < 0) n = 0; // thats safe ı think
    password[n] = '\0';

    int value = 0;

    for(int i = 0; i < n; i++) {

      if (password[i] < '0' || password[i] > '9') // read the user input
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
