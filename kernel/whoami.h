/*
    Who Am I?
    By CasTolax 2026
*/

#ifndef WHOAMI_H
#define WHOAMI_H

// for tests
typedef struct who_am_t
{
  int userid;
  int id_status;
  int tiro;     // 1
  int usor;     // 2
  int dominus;  // 3
}who_am_t;


uint64 whoami(void);

#endif
