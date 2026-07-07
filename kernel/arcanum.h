/*
 * Arcanum header
 *
 * By CasTolax 2026
 */

#ifndef ARCANUM_H
#define ARCANUM_H

// please check the Arcanum.c before you change these variables.
extern int userid;

uint64 checkid(int id);
uint64 setid(void);
uint64 arcanum(char password[9], char username[8]);

#endif
