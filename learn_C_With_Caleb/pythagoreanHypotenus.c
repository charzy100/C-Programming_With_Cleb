// A program that takes two input of the sides of a triangle and calculates the hypotenus.

#include <stdio.h>
#include <math.h>

int main ()
{
	// Enter value for the first side of the triangle, say side a in meters(m)
	printf("Enter the value for the first side of the triangle in meters(m):\n");
	double a;
	scanf("%lf", &a);
	getchar();

	// Enter value for  second side,  say b.
	printf("Enter the value for the second side of the triangle in meters(m):\n");
	double b;
	scanf("%lf", &b);

	//The calculation for the 3rd side, which is the hypotenus, say c.
	double c = sqrt((a*a) + (b*b));
	printf("Based on your inputs, the hypotenus is %fm\n", c);
	return 0;

}
