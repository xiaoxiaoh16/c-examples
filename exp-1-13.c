/*************************************************************************
    > File Name: exp-1-13.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 16:44:06 2017
 ************************************************************************/

/*
 * Write a C program to enter base and height of a triangle and find its area.
 * 
 * Example
 *
 * Input
 * Enter base of the triangle: 10
 * Enter height of the triangle: 15
 * 
 * Output
 * Area of the triangle = 75 sq. units
 *
 */

#include <stdio.h>

int main()
{
	float base, height, area;

	/* read base and height of a  triangle from user */
	printf("Enter base and height of a  triangle: ");
	scanf("%f%f", &base, &height);

	/* Calculate the area of a tirangle */
	area = base * height / 2;
	
	printf("The area of the triangle is %.2f\n", area);

	return 0;
}
