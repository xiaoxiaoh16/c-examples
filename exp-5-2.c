/*************************************************************************
    > File Name: exp-5-2.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul  3 14:45:41 2017
 ************************************************************************/

/*
 * Write a C program print total number of days in a month using switch case.
 * 
 * Example
 * Input
 * Input month number: 3
 * 
 * Output
 * Total number of days = 31
 *
 * Month	Total days
 * January	31 days
 * February	28/29 days
 * March	31 days
 * April	30 days
 * May	31 days
 * June	30 days
 * July	31 days
 * August	31 days
 * September	30 days
 * October	31 days
 * November	30 days
 * December	31 days
 *
 */

#include <stdio.h>

int main()
{
	int month;

	//read a month number from user
	printf("Enter a month number: ");
	scanf("%d", &month);

	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		printf("The %dth month of year has 31 days\n", month);
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		printf("The %dth month of year has 30 days\n", month);
		break;
	}
	case 2:
	{
		printf("The %dth month of year has 28 or 29 days\n", month);
		break;
	}
	default: 
	printf("Invalid month number, please input number (1-12)\n");
	}

	return 0;
}

