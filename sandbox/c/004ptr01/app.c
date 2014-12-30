#include <stdio.h>

int main() 
{
  char age_c[8];
  int age;

  puts("Enter your age: ");
  scanf("%7s", age_c);
  age = atoi(age_c);
  puts("You're %i.", &age);

  puts("You have a birthday.");
  age_up(age);
  puts("Now you're %i.", age);

  return 0;
}

void age_up(int* age)
{
  *age++;
}
