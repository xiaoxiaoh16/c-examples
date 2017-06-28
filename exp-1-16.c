/*************************************************************************
    > File Name: exp-1-16.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 17:25:15 2017
 ************************************************************************/

/*
 * Write a C program to enter P, T, R and calculate Simple Interest.
 *
 * Example
 *
 * Input
 * Enter principle: 1200
 * Enter time: 2
 * Enter rate: 5.4
 * 
 * Output
 * Simple Interest = 129.600006
 *
 */

#include <stdio.h>

int main()
{
	float principle, time, rate, SI;

	/* read principle, time, rate from user */
	printf("Enter principle, time, rate one by one: ");
	scanf("%f%f%f", &principle, &time, &rate);

	/* Calculate simple interest */
	SI = principle * time * (rate / 100);

	printf("The simple interest is %f\n", SI);

	return 0;
}
