/*************************************************************************
    > File Name: exp-4-17.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 15:06:06 2017
 ************************************************************************/

/*
 * Write a C program to find all roots of a quadratic equation.
 *
 * Example
 *
 * Input
 * Input a: 8
 * Input b: -4
 * Input c: -2
 * 
 * Output
 * Root1: 0.80
 * Root2: -0.30
 *
 */

#include <stdio.h>
#include <math.h>	//used for sqrt() function

int main()
{
	float a, b, c;
	float root1, root2, imaginary;
	float discriminant;

	/* Read values of a, b, c of quadratic equation*/
	printf("Enter values of a, b, c of quadratic equation (ax^2 + bx + c = 0): ");
	scanf("%f%f%f", &a, &b, &c);

	discriminant = (b * b) - 4 * a * c;

	if(discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Two distinct and real roots exists: %.2f and %.2f\n", root1, root2);
	}		
	else if(discriminant == 0)
	{
		root1 = root2 = -b / (2*a);
		printf("Two equal and real roots exists: %.2f and %.2f\n", root1, root2);
	}
	else
	{
		imaginary =  sqrt(-discriminant) / (2 * a);
		printf("Two distinct complex roots exists, %.2f + i%.2f and %.2f + i%.2f\n", (-b)/(2*a), imaginary, (-b)/(2 * a), imaginary );
	}

	return 0;

}
