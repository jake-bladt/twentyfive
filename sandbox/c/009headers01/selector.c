#include <stdio.h>
#include "selector.h"

int select_floor()
{
	int ret;
	printf("Select your target floor: ");
 	scanf("%i", &ret);
 	return ret;
}
