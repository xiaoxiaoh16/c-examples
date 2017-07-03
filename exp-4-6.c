/*************************************************************************
    > File Name: exp-4-6.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 10:41:53 2017
 ************************************************************************/

/*
 * Write a C program to check whether a year is leap year or not.
 *
 * Example
 *
 * Input
 * Input year: 2004
 * 
 * Output
 * 2004 is leap year.
 *
 */

#include <stdio.h>

int main()
{
	int year;

	//rad a year from user
	printf("Enter a year: ");
	scanf("%d", &year);

	if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400 == 0))
		printf("%d is leap year\n", year);
	else
		printf("%d is common year\n", year);

	return 0;
}
