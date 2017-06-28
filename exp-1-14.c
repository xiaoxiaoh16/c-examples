/*************************************************************************
    > File Name: exp-1-14.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 16:50:31 2017
 ************************************************************************/

/*
 * Write a C program to calculate area of an equilateral triangle.
 *
 * Example
 *
 * Input
 * Enter side of the equilateral triangle: 10
 * 
 * Output
 * Area of equilateral triangle = 43.3 sq. units
 *
 */

#include <stdio.h>
#include <math.h>	//used for sqrt() function

int main()
{
	float side, area;

	/* Input side of equilateral triangle */
	printf("Enter side of an equilateral triangle: ");
	scanf("%f", &side);

	/* Calculate area of equilateral triangle */
	area = (sqrt(3) / 4) * (side * side);

	printf("Area of equilateral triangle is %.2lf\n", area);

	return 0;
}
