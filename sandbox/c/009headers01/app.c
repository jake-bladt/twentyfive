#include <stdio.h>
#include "selector.h"

int main()
{
	int current_floor;
	int target_floor;
	printf("Select your current floor: ");
	scanf("%i", &current_floor);
	target_floor = (2 == current_floor) ? 1 : select_floor();
	if(target_floor >= current_floor)
	{
		printf("Can not go to floor %i. This elevator is going down.", target_floor);
	}
	else
	{
		printf("Welcome to floor %i. Get out.", target_floor);
	}
	return 0;
}
