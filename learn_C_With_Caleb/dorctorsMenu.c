/* The application enables doctor to take a decision.
 * Dorctors are expected to select from a set of numbers and then decide on what to do.
 */
#include <stdio.h>
int main ()
{
	printf("Kindly select from the list 1-4\n");
	printf("1. add a patient\n");
	printf("2. view a patien\n");
	printf("3. search a patient\n");
	printf("4. exit\n");

	int input;
	scanf("%i", &input);
	
	if(input == 1)
	{
		printf("Kindly add a patient\n");
	} else if(input == 2)
	{
		printf("You have to view a patient\n");
	} else if(input == 3)
	{
		printf("Time to search for a patience\n");
	} else if(input == 4)
	{
		printf("You have to exit now\n");
	} else
	{
		printf("You entered an input not contained\n");
	}
	return 0;
}
