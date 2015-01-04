#include <stdio.h>
#include <string.h>

char[][16] secret_words = { "yes", "no", "the", "lotion", "admin", "fnord", "secret" };

int test_for_secret_words(char[] input)
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
  scanf("%79s", search_for);
  int res;
  res = test_for_secret_words(search_for);
  if(res == -1) {
    puts("No secret words found.");
  } else {
    printf("Found secret word %s", secret_words[res]);
  }
  return 0;
}
