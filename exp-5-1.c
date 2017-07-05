/*************************************************************************
    > File Name: exp-5-1.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul  3 14:29:36 2017
 ************************************************************************/

/*
 * Write a C program to print day of week name using switch case.
 *
 * Example
 *
 * Input
 * Input week number(1-7): 2
 * 
 * Output
 * Tuesday
 *
 */

#include <stdio.h>

int main()
{
	int week;

	//read the number of week from user
	printf("Enter a number of week: ");
	scanf("%d", &week);

	switch(week)
	{
		case 1:
			{
				printf("The %dth of week is Monday\n", week);
				break;
			}
		case 2:
			{
				printf("The %dth of week is Tuesday\n", week);
				break;
			}
		case 3:
			{
				printf("The %dth of week is Wedensday\n", week);
				break;
			}
		case 4:
			{
				printf("The %dth of week is Thursday\n", week);
				break;
			}
		case 5:
			{
				printf("The %dth of week is Friday\n", week);
				break;
			}
		case 6:
			{
				printf("The %dth of week is Saturday\n", week);
				break;
			}
		case 7:
			{
				printf("The %dth of week is Sunday\n", week);
				break;
			}
		default:
			printf("Invalide week number, please inpu week number (1-7)\n");
	}
	return 0;
}
