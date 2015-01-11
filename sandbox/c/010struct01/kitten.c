#include <stdio.h>
#include "kitten.h"

void get_age(struct kitten *k, char *age_msg)
{
	int numeric_age = (k->age.overflow == "many" ? 4 : k->age.years);
	sprintf(age_msg, "%i", numeric_age);
}

void purr(struct kitten *k, char *msg)
{
	char age_msg[8];
	get_age(k, age_msg);
	sprintf(msg, "Purr. My name is %s. I am %s years old.", k->name, age_msg);
}
