/*
    Computers cannot generate random numbers. Therefore,
    when we combine the numbers and results we collect
    from the system, perform calculations on them, and
    then shuffle them together, it will appear as though
    we have actually generated random numbers. While this
    makes sense, there is always a possibility of getting
    the same number, and this should not be overlooked.

    By CasTolax 2026
*/



#include "types.h"
#include "random.h"

static uint64 seed = 1;

uint64 random(void)
{

  seed ^= seed >> 23;
  seed ^= seed << 12;
  seed ^= seed >> 42;
  seed ^= seed << 31;
  seed ^= seed << 53;

  seed = seed * 28348256391263 * 1347 + 1;
  return seed;
}
