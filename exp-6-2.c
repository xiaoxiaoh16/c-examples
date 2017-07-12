/*************************************************************************
    > File Name: exp-6-2.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jul  6 15:54:03 2017
 ************************************************************************/

/* 
 * Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
 * 
 * Example
 *
 * Input
 * Input N: 10
 * 
 * Output
 * Natural numbers from 10-1 in reverse: 
 * 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
 *
 */

#include <stdio.h>

int main()
{
	int i, n;

	//Input the value of n
	printf("Enter the value of n: ");
	scanf("%d", &n);

	i=n;

	printf("All natural numbers in reverse (from %d to 1)\n", n);

	while(i >= 1)
	{
		printf("%d\n", i);
		i--;
	}

	return 0;
}
