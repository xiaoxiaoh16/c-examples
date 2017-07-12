/*************************************************************************
    > File Name: exp-6-4.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jul  6 17:00:05 2017
 ************************************************************************/

/*
 * Write a C program to print all even numbers between 1 to 100. - using while loop
 *
 * Example
 *
 * Input
 * Input upper range: 10
 * 
 * Output
 * Even numbers between 1 to 10:
 * 2, 4, 6, 8, 10
 *
 */

#include <stdio.h>

int main()
{
	int i, n;
	i = 2;

	// read a number from user
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("All even numbers between 1 to %d\n", n);

	// while loop will iterate till n
	while(i <= n)
	{
		printf("%d\n", i);
		i += 2;
	}

	return 0;
}
