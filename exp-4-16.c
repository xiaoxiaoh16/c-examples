/*************************************************************************
    > File Name: exp-4-16.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 15:00:43 2017
 ************************************************************************/

/*
 * Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
 *
 * Example
 *
 * Input
 * Input first side: 30
 * Input second side: 30
 * Input third side: 30
 * 
 * Output
 * Triangle is equilateral triangle
 *
 */

#include <stdio.h>

int main()
{
	int a, b, c;

	/* Read all sides of a triangle */
	printf("Enter three sides of a triangle: ");
	scanf("%d%d%d", &a, &b, &c);

	if((a == b) && (b == c))
		printf("Equilateral triangle\n");
	else if((a == b) || ( a == c) || (b == c))
		printf("Isosceles triangle\n");
	else
		printf("Scalene triangle\n");

	return 0;
}
