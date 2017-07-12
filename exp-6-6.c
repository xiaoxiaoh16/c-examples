/*************************************************************************
    > File Name: exp-6-6.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 10:20:29 2017
 ************************************************************************/

/*
 * Write a C program to find sum of all natural numbers in given range.
 *
 * Example
 *
 * Input
 * Input lower limit: 1
 * Input upper limit: 10
 *
 * Output
 * Sum of natural numbers 1-10: 55
 *
 */

#include <stdio.h>

int main()
{
	int i, start, end, sum;
	sum = 0;

	//Read lower limit from user
	printf("Enter lower limit: ");
	scanf("%d", &start);

	//Read upper limit from user
	printf("Enter upper limit: ");
	scanf("%d", &end);

	for(i=start; i<=end; i++)
	{
		sum += i;
	}

	printf("The sum fo all natural numbers between %d to %d is %d\n", start, end, sum);

	return 0;
}
