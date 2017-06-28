/*************************************************************************
    > File Name: exp-1-17.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 17:26:31 2017
 ************************************************************************/

/*
 * Write a C program to enter P, T, R and calculate Compound Interest.
 *
 * Example
 * Input
 * Enter principle (amount): 1200
 * Enter time: 2
 * Enter rate: 5.4
 * Output
 * Compound Interest = 133.099197
 *
 */

#include <stdio.h>
#include <math.h>	//used for pow() function

int main()
{
	float principle, time, rate, CI;

	/* read principle, time, rate from user */
	printf("Enter principle, time and rate one by one: ");
	scanf("%f%f%f", &principle, &time, &rate);

	/* Calculate copound interest */
	CI = principle * (pow((1 + rate / 100),time) - 1);
	
	printf("The compound interest is %f\n", CI);

	return 0;
}
