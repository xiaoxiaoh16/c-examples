/*************************************************************************
    > File Name: exp-5-5.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul  5 12:22:15 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is even or odd using switch case.
 *
 * Example
 *
 * Input
 * Input number: 12
 *
 * Output
 * Even number
 *
 */

#include <stdio.h>

int main()
{
	int num;

	// read a number from user
	printf("Enter a number from user: ");
	scanf("%d", &num);

	switch(num % 2)
	{
		case 0:
			{
				printf("%d is even\n", num);
				break;
			}
		case 1:
			{
				printf("%d is odd\n", num);
			}
	}

	return 0;
}
