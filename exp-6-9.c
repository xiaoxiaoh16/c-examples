/*************************************************************************
    > File Name: exp-6-9.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 10:26:02 2017
 ************************************************************************/

/*
 * Write a C program to print multiplication table of any number
 * 
 * Example
 *
 * Input
 * Input num: 5
 * 
 * Output
 * 5 * 1  = 5
 * 5 * 2  = 10
 * 5 * 3  = 15
 * 5 * 4  = 20
 * 5 * 5  = 25
 * 5 * 6  = 30
 * 5 * 7  = 35
 * 5 * 8  = 40
 * 5 * 9  = 45
 * 5 * 10 = 50
 *
 */

#include <stdio.h>

int main()
{
	int i, num;

	//Read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",num, i, (num * i));
	}

	return 0;
}
