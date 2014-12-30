#include <stdio.h>

int main() 
{
  char your_name[64];
  puts("Enter your name: ");
  scanf("%63s", your_name);
  printf("Welcome to twenty-five, %s!\n", your_name);
}
