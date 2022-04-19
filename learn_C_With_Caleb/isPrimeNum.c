#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	printf("Enter an interger greater than or equal to 2 ??:\n");

	int input;
	scanf("%d", &input);

	int isPrime = true;

	for(int i = input - 1; i >= 2; i--)
	{

		if(input % i == 0)
		{
			isPrime = false;	
		} 
	}

	if (isPrime)
	{
		printf("\nIs prime!\n");

	} else
	{
		printf("\nNot Prime!\n");
	}
	return 0;
}
