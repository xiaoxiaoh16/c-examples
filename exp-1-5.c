/*************************************************************************
    > File Name: exp-1-5.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jun 26 16:52:42 2017
 ************************************************************************/

/*
 * Write a C program to enter radius of a circle and find its diameter, circumference and area.
 *
 * Example
 *
 * Input
 * Enter radius: 10
 * 
 * Output
 * Diameter = 20 units
 * Circumference = 62.79 units
 * Area = 314 sq. units
 *
 */
 
#include <stdio.h>
#include <math.h>  //Used for PI referred as M_PI 

int main()
{
	float radius, diameter, circumference, area;

	/* Input radius of circle from user */
	printf("Enter radius of circle: ");
	scanf("%f", &radius);

	/* calculate diameter, circumference and area */
	diameter = 2 * radius;
	circumference = 2 * M_PI * radius;
	area = M_PI * (radius * radius);

	/* print all result */
	printf("Diameter of circle = %f\n", diameter);
	printf("Circumference of circle = %f\n", circumference);
	printf("Area of circle = %f\n", area);

	return 0;
}

