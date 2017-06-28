/*************************************************************************
    > File Name: exp-1-12.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 16:36:47 2017
 ************************************************************************/

/*
 * Write a C program to enter two angles of a triangle and find the third angle.
 *
 * Example
 *
 * Input
 * Enter first angle: 60
 * Enter second angle: 80
 * 
 * Output
 * Third angle = 40
 *
 */

#include <stdio.h>

int main()
{
	int a, b, c;

	/* read two angles of a triangle from user */
	printf("Enter two angles of a triangle: ");
	scanf("%d%d", &a, &b);

	/* calculate the third angles */
	c = 180 - a - b;

	printf("Third angle of the triangle is %d\n", c);

	return 0;
}
