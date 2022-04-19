#include <stdio.h>

int main ()
{
	printf("How many pizza slices do you eat?:\n");

	int slices;

	scanf("%i", &slices);

	switch(slices)
	{
		case 1:
			printf("You did a great job\n");
			break;
		case 2:
			printf("You did an ok job\n");
			break;
		case 3:
			printf("You did a bad job! Try to eat 2 next time\n");
			break;
		case 4:
			printf("You should probably own a pizza producing firm.\n");
			break;
		default:
			printf("You would probably battle heart disease soon! Enjoy it\n");
			break;
	}
	return 0;
}
