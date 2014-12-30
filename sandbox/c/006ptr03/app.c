#include <stdio.h>

const char *warning_message = "Warning!";

int main()
{
  char stay_cool[] = warning_message;
  stay_cool[0] = 'M';
  stay_cool[1] = 'o';
  printf(stay_cool);
}
