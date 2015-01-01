#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  char fortunes[][80] = {
  	"It is certain",
  	"It is decidedly so",
  	"Without a doubt",
  	"Yes definitely",
  	"You may rely on it",
  	"As I see it, yes",
  	"Most likely",
  	"Outlook good",
  	"Yes",
  	"Signs point to yes",
  	"Reply hazy try again",
  	"Ask again later",
  	"Better not tell you now",
  	"Cannot predict now",
  	"Concentrate and ask again",
  	"Don't count on it",
  	"My reply is no",
  	"My sources say no",
  	"Outlook not so good",
  	"Doubtful"
  };

  int ndx;
  srand(time(NULL)));
  ndx = rand() % 20;
  printf("%s.\n" fortunes[ndx]);

  return 0;
}
