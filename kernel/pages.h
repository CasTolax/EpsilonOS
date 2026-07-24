/*
 *  This is the page test or ram test
 *  By CasTolax 24/07/2026
 *
 *
 */

#ifndef PAGES
#define PAGES

typedef struct p_data{

  int status;   // status the test
  int p_status; // status the page
}p_data;

uint64 pagectrl(void);
uint64 pagefull(void);
void   execpage(void);
int pagetest(void); // page test start

#endif
