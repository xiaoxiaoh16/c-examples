/*************************************************************************
    > File Name: exp-1-10.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 14:57:50 2017
 ************************************************************************/

/*
 * Write a C program to find power of any number x ^ y.
 *
 * Example
 *
 * Input
 * Enter base: 5
 * Enter exponent: 2
 *
 * Output
 * x ^ y = 25
 *
 */

#include <stdio.h>
#include <math.h>  //used for pow() function

int main()
{
	double x, y, power;

	/* read two numbers from user to calculate power*/
	printf("Enter base: ");
	scanf("%lf", &x);
	printf("Enter exponent: ");
	scanf("%lf", &y);

	/* calculate x^y */
	power = pow(x, y);

	printf("%.2lf^%.2lf = %.2lf\n", x, y, power);

	return 0;

}


