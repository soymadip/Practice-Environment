#include <stdio.h>

int main() {

  FILE *fptr;

  fptr = fopen("main.c", "r");

  char ch;

  fclose(fptr);

  return 0;
}
