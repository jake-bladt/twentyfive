#include <stdio.h>

void age_up(int* age)
{
  // Don't use the increment (++) operator here. It
  // has a different meaning with pointers.
  *age += 1;
}

int main() 
{
  int age;

  printf("Enter your age: ");
  scanf("%i", &age);
  printf("You're %i.\n", age);

  printf("You have a birthday.\n");
  age_up(&age);
  printf("Now you're %i.\n", age);

  return 0;
}
