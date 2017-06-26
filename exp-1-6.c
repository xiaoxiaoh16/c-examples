/*************************************************************************
    > File Name: exp-1-6.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jun 26 17:04:17 2017
 ************************************************************************/

/*
 * Write a C program to enter length in centimeter and convert it into meter and kilometer.
 *
 * Example
 *
 * Input
 * Length in centimeter = 1000
 * 
 * Output
 * Length in meter = 10 m
 * Length in kilometer = 0.01 km
 *
 */

#include <stdio.h>

int main()
{
	float cm, meter, km;

	/* read length in centimeter from user */
	printf("Enter length in centimeter: ");
	scanf("%f", &cm);

	/* Convert centimeter into meter and kilometer */
	meter = cm / 100.0;
	km = cm / 100000.0;

	/* print result */
	printf("Length in meter is %f\n", meter);
	printf("Length in kilometer is %f\n", km);

	return 0;
}
