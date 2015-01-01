#include <stdio.h>

void age_up(int* age)
{
  // Don't use the increment (++) operator here. It
  // has a different meaning with pointers.
  *age += 1;
}

int main() 
{
  char age_c[8];
  int age;

  printf("Enter your age: ");
  scanf("%7s", age_c);
  age = atoi(age_c);
  printf("You're %i.\n", age);

  printf("You have a birthday.\n");
  age_up(&age);
  printf("Now you're %i.\n", age);

  return 0;
}
