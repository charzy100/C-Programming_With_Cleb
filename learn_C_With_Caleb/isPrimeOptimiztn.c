/* This Application accepts positive integers not less than 2 and determines whether or not the inputed number is prime or not*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	printf("Enter a positive integer not less than 2\n");
	int isPrime = true;
	int input;
	scanf("%d", &input);

	for(int i = sqrt(input); i > 1; i--)
	{
		if(input % i == 0)
		{

			isPrime = false;		}

	}

	if(isPrime)
	{
		printf("The number inputed is A PRIME NUMBER\n");
	} else
	{
		printf("The inputed number is NOT A PRIME NUMBER\n");
	}
	return 0;
}

