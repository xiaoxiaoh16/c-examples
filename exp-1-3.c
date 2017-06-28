/*************************************************************************
    > File Name: exp-1-3.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jun 26 16:32:44 2017
 ************************************************************************/

/*
 * Write a C program to enter length and breadth of a rectangle and find its perimeter
 *
 * Example
 *
 * Input
 * Input length: 5
 * Input width: 10
 *
 * Output
 * Perimeter of rectangle = 30 units
 */

#include <stdio.h>

int main()
{
	float length, width, perimeter;
	
	/* read length and width of rectangle from user*/
	printf("Enter length of the rectangle: ");
	scanf("%f", &length);
	printf("Enter width of the rectangle: ");
	scanf("%f", &width);

	/* calculates perimeter of rectangle */
	perimeter = 2 * (length + width);

	/* print perimeter of rectangle */
	printf("Perimeter of the rectangle is %f\n", perimeter);

	return 0;
}

