/*************************************************************************
    > File Name: exp-1-4.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jun 26 16:44:13 2017
 ************************************************************************/

/*
 * Write a C program to enter length and breadth of a rectangle and find its area.
 *
 * Example
 *
 * Input
 * Input length: 5
 * Input width: 10
 *
 * Output
 * Area of rectangle = 50 sq. units
 *
 */

#include <stdio.h>

int main()
{
	float length, width, area;

	/* read length and width of rectangle from user */
	printf("Enter length of rectangle: ");
	scanf("%f", &length);
	printf("Enter width of rectangle: ");
	scanf("%f", &width);

	/* calculate area of reactangle */
	area = length * width;

	/* print area of rectangle */
	printf("Area of rectangle = %f\n", area);

	return 0;

}
