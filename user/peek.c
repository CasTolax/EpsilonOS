#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "kernel/color.h"
#include "user/user.h"

/*
 * The peek functions.
 *
 * when type peek and then you click space, there is no input.
 * this is the correct input but, you some type word or example you write
 * "asdws", The output is displayed twice.
 * I dont now where is the bug.
 *
 */

char buf[512];

void peek(int fd)
{
  int n;

  while ((n = read(fd, buf, sizeof(buf))) > 0) {
    if (write(1, buf, n) != n) {
      fprintf(2, "peek: write error\n");
      exit(1);
    }
  }

  if (n < 0) {
    fprintf(2, "peek: read error\n");
    exit(1);
  }
}

int main(int argc, char *argv[])
{
  int fd, i;

  if (argc <= 1) {
    peek(0);
    exit(0);
  }

  for (i = 1; i < argc; i++) {
    if ((fd = open(argv[i], O_RDONLY)) < 0) {
      fprintf(2, "peek: cannot open %s\n", argv[i]);
      exit(1);
    }
    peek(fd);
    close(fd);
  }
  exit(0);
}
