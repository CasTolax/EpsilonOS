/*
 *
 * By CasTolax 2026
 */

#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/whoami.h"
#include "user.h"

int whoamiu(void)
{
  whoami();
  return 0;
}

int main(int argc, char *argv[])
{
  whoamiu();
  return 0;
}
