/*************************************************************************
    > File Name: exp-1-11.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 15:10:07 2017
 ************************************************************************/

/*
 * Write a C program to enter any number and calculate its square root.
 *
 * Example
 *
 * Input
 * Enter any number: 9
 * 
 * Output
 * Square root of 9 = 3
 *
 */

#include <stdio.h>
#include <math.h>	// used for sqrt() function

int main()
{
	double num, root;

	/* read the number to find square root */
	printf("Enter number to find square root: ");
	scanf("%lf", &num);

	/* calculate square root of num */
	root = sqrt(num);

	printf("Square root of %.2lf is %.2lf\n", num, root);

	return 0;
}



