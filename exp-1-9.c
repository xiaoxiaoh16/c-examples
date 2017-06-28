/*************************************************************************
    > File Name: exp-1-9.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 14:46:08 2017
 ************************************************************************/

/*
 * Write a C program to input number of days from user and convert it to years, weeks and days
 * (Ignoring leap year)
 *
 * Example
 *
 * Input
 * Enter days: 373
 *
 * Output
 * 373 days = 1 year/s, 1 week/s and 1 day/s
 *
 */

#include <stdio.h>

int main()
{
	int days, weeks, years;

	/* read total number of days from user*/
	printf("Enter the total days: ");
	scanf("%d", &days);
	printf("The total number of days is %d =", days);

	/* calculate the days, weeks, years*/
	years = (days / 365);	//ignoring leap year
	weeks = (days % 365 ) / 7;
	days = days - years * 365 - weeks * 7;

	/* print days, weeks, years */
	printf(" %d years", years);
	printf(" %d weeks", weeks);
	printf(" %d days\n", days);

	return 0;
}
