#include <stdio.h>
int main()
{
	// This program accepts length and breadth of a rectangke from a user and calcultaes the perimeter of the rectangle.
	
	double l;//lenght
	printf("Enter a value for the length in meters(m):\n");
	scanf("%lf", &l);
	getchar();

	double b; //breadth
	printf("Enter a value for the breadth in meters(m):\n");
	scanf("%lf", &b);

	double p;
	p = 2 * (l + b);

	printf("The perimeter of the rectangle with the inputed value is %lfm\n", p);
	return 0;
}

