#include <stdio.h>
#include "kitten.h"

int main()
{
	struct kitten princess = {"Princess", "Persian", 3};
	struct kitten sff = { "Sneaky Furfoot", "American Shorthair", 3};

	char princess_purr[80];
	purr(&princess, princess_purr);
	printf("%s\n", princess_purr);

	char sff_purr[80];
	purr(&sff, sff_purr);
	printf("%s\n", sff_purr);

	return 0;
}
