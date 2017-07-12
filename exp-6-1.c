/*************************************************************************
    > File Name: exp-6-1.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul  5 15:23:48 2017
 ************************************************************************/

/*
 * Write a C program to print all natural numbers from 1 to n. - using while loop
 *
 * Example
 *
 * Input
 * Input upper limit: 10
 * 
 * Output
 * Natural numbers from 1 to 10: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
 *
 */

#include <stdio.h>

int main()
{
	int i, n;
	i = 1;

	//Input the value of n
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	printf("All natural numbers from 1 to %d is: \n", n);
	while(i <= n)
	{
		printf("%d\n", i);
		i++;
	}

	return 0;
}
