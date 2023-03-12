#include <stdio.h>

char * read() {
  int buffer_size = 100;
  char * buffer = malloc(buffer_size);
  fgets(buffer, buffer_size, stdin);
  return buffer;
}
