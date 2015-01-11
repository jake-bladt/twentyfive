#include <stdio.h>
#include "kitten.h"

void get_age(struct kitten *k, char *age_msg)
{
	sprintf(age_msg, "%i", k->age);
}

void purr(struct kitten *k, char *msg)
{
	char age_msg[8];
	get_age(kitten, age_msg);
	sprintf(msg, "Purr. My name is %s. I am %s years old.", k->name, age_msg);
}
