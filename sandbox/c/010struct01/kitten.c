#include <stdio.h>
#include "kitten.h"

void purr(struct kitten k, char *msg)
{
	sprintf(msg, "Purr. My name is %s. I am %i years old.", k.name, k.age);
}
