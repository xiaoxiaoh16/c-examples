/*************************************************************************
    > File Name: exp-6-27.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 11:20:30 2017
 ************************************************************************/

/*
 * Write a C program to print all Prime numbers between 1 to n.
 *
 * Example
 * 
 * Input
 * Input lower limit: 1
 * Input upper limit: 20
 *
 * Output
 * Prime numbers between 1-20: 2, 3, 5, 7, 13, 17, 19
 *
 */

#include <stdio.h>

int main()
{
	int i, j, num, isPrime;

	//Read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("All prime numbers between 1 to %d are:", num);

	//Find all prime number between 1 and n
	for(i=2; i<=num; i++)
	{
		//Asumme that the current number is Prime
		isPrime = 1;
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1)
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return 0;
}
