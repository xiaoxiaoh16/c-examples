/*************************************************************************
    > File Name: exp-6-7.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 09:53:41 2017
 ************************************************************************/

/*
 * Write a C program to find sum of all even numbers in given range
 * 
 * Example
 *
 * Input
 * Input lower limit of even number: 1
 * Input upper limit of even number: 10
 * 
 * Output
 * Sum of even numbers between 1 to 10: 30
 *
 */

#include <stdio.h>

int main()
{
	int i, start, end, sum;
	sum=0;

	// Read lower limit number from user
	printf("Enter lower limit of even: ");
	scanf("%d", &start);

	// Read uppper limit number from user
	printf("Enter upper limit of even:");
	scanf("%d", &end);

	printf("The sum of all even numbers between %d to %d is ", start, end);

	for(i=start; i<=end; i++)
	{
		if((i%2) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
