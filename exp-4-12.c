/*************************************************************************
    > File Name: exp-4-12.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 12:25:41 2017
 ************************************************************************/

/*
 * Write a C program to input month number and print number of days in that month.
 *
 * Example
 *
 * Input
 * Enter month number: 1
 * 
 * Output
 * It contains 31 days.
 *
 */

#include <stdio.h>

int main()
{
	int month;

	//read month number from user
	printf("Enter month number (1-12): ");
	scanf("%d", &month);

	if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		printf("The days of %dth month is 31\n", month);
	else if((month == 4) || (month == 6) || (month == 9) || (month == 11))
		printf("The days of %dth is 30\n", month);
	else if(month == 2)
		printf("The days of %dth is 28 or 29\n", month);
	else
		printf("Invalid number, you should enter month number between 1 and 12\n");

	return 0;
}
