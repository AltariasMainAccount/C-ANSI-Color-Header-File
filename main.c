#include <stdio.h>
#include "color.h"

int main(void) {
  printf(ANSI_RED "Red Color Test\n");
  printf(ANSI_CYAN "Cyan Color Test\n");
  printf(ANSI_GREEN "Green Color Test\n");
  return 0;
}