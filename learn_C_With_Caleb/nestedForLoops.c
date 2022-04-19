#include <stdio.h>
int main()
{
	printf("Enter a value you wish to see in a nested form\n");
	int input;

	scanf("%i", &input);

	int i = input;
	printf("The Nested Format of your input is shown below\n");

	for (; i >= 0; i--)
	{
		for (int k = i; k >= 0; k--)
		{
			printf("%d ", k);
		}

		printf("\n");
	}
	return 0;
}
