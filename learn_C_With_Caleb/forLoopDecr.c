#include <stdio.h>
int main ()
{
/* The loop has 3 main process path..the intitialization, the comparison and the update
 * The initialization has to do with the starting, ie i = 0;
 * The comparison determines the termination point. ie 1 < 10;
 * The update talks about the increment or decrement pattern
 */
	printf("Enter a positive  interger to decrement by a unit below:\n");
	int i;
	scanf("%d", &i);
	for (; i > 0; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}
