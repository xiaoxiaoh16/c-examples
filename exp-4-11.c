/*************************************************************************
    > File Name: exp-4-11.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 11:33:18 2017
 ************************************************************************/

/*
 * Write a C program to input week number and print week day.
 *
 * Example
 * 
 * Input
 * Input week number: 1
 * 
 * Output
 * Monday
 *
 */

#include <stdio.h>

int main()
{
	int week;

	//read week number from user
	printf("Enter the week number(1-7): ");
	scanf("%d", &week);

	if(week == 1)
		printf("%dth of week is Monday\n", week);
	else if(week == 2)	
		printf("%dth of week is Tuesday\n", week);
	else if(week == 3)	
		printf("%dth of week is Wedensday\n", week);
	else if(week == 4)
		printf("%dth of week is Thursday\n", week);
	else if(week == 5)
		printf("%dth of week is Friday\n", week);
	else if(week == 6)
		printf("%dth of week is Saturday\n", week);
	else
		printf("%dth of week is Sunday\n", week);

	return 0;
}
