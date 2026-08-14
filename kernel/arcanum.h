/*
 * Arcanum header
 *
 * By CasTolax 2026
 */

#ifndef ARCANUM_H
#define ARCANUM_H

// The maximum number of attempts the user can input
#define MAX_ATTEMPS  3
extern int failed_attemps;

// please check the Arcanum.c before you change these variables.
extern int userid;
// the users data example (for me)
extern char name[8];
extern char pass[9];

uint64 checkid(int id);
uint64 setid(void);
uint64 lock_system(void);
uint64 cf(void); // check fail
uint64 arcanum(char password[9], char username[8]);

#endif
