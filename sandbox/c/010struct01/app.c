#include <stdio.h>
#include "kitten.h"

int main()
{
	struct kitten princess = {"Princess", "Persian", 3};
	struct kitten sff = { "Sneaky Furfoot", "American Shorthair", 3};

	printf("%s\n", purr(princess));
	printf("%s\n", purr(sff));

	return 0;
}
