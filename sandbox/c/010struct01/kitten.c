#include <stdio.h>
#include "kitten.h"

char * purr(struct kitten k)
{
	char msg[80] = {};
	sprintf(msg, "Purr. My name is %s. I am %i years old.", k.name, k.age);
	return msg;
}
