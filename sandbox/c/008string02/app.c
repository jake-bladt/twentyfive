#include <stdio.h>
#include <string.h>

char secret_words[][16] = { "yes", "no", "the", "lotion", "admin", "fnord", "secret" };

int test_for_secret_words(char input[])
{
  int i;
  for(i = 0; i < 7, i++) {
    if(strstr(input, secret_words[i]) {
      return i;
    }
  }
  return -1;
}

int main()
{
  char input_sentence[80];
  printf("Search for: ");
  scanf("%79s", input_sentence);
  int res;
  res = test_for_secret_words(input_sentence);
  if(res == -1) {
    puts("No secret words found.");
  } else {
    printf("Found secret word '%s.'", secret_words[res]);
  }
  return 0;
}
