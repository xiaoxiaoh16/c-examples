/*************************************************************************
    > File Name: exp-5-6.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul  5 12:30:05 2017
 ************************************************************************/

/*
 * Write a C program to find roots of a quadratic equation using switch case.
 *
 * Example
 *
 * Input
 * Input a: 4
 * Input b: -2
 * Input c: -10
 * 
 * Output
 * Root1: 1.85
 * Root2: -1.35
 *
 */

#include <stdio.h>
#include <math.h>	//used for sqrt() function

int main()
{
	float a, b, c;
	float root1, root2, imaginary;
	float discriminant;

	/* Read a, b, c of a quadratic equation from user */
	printf("Enter value of a, b, c of quadratic equation (aX^2 + bX + cc = 0): ");
	scanf("%f%f%f", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

	/* compute roots of quadratic equation based on the nature of discriminant */
	// warning: switch condition has boolean value [-Wswitch-bool]
	switch(discriminant > 0)
	{
		case 1: 
			{
				root1 = (-b + sqrt(discriminant)) / (2 * a);
				root2 = (-b - sqrt(discriminant)) / (2 * a);
				printf("Two distinct and real roots exist: %.2f and %.2f\n", root1, root2);
				break;
			}
		case 0:
			{
				switch(discriminant < 0)
				{
					case 0: 
					{
						root1 = root2 = -b / (2 * a);
						printf("Two equal and real roots exist: %.2f and %.2f\n", root1, root2);
						break;
					}
					case 1:
					{
						imaginary = sqrt(-discriminant) / (2 * a);
						root1 = root2 = -b / (2 * a);
						printf("Two distict complex roots exist: %.2f + i %.2f and %.2f - i %.2f\n", root1, imaginary, root2, imaginary);
						break;
					}
				}
			}
	}

	return 0;
}
