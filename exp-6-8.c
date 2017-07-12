/*************************************************************************
    > File Name: exp-6-8.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 10:11:19 2017
 ************************************************************************/

/*
 * Write a C program to find sum of all odd numbers in given range
 *
 * Example
 *
 * Input
 * Input lower limit: 1
 * Input upper limit: 10
 * 
 * Output
 * Sum of odd numbers from 1-10: 25
 *
 */

#include <stdio.h>

int main()
{
	int i, start, end, sum;

	//Read lower limit from user
	printf("Enter lower limit:");
	scanf("%d", &start);

	//Read upper limit from user
	printf("Enter upper limit: ");
	scanf("%d", &end);

	for(i=start; i<=end; i++)
	{
		if(i%2)
			sum += i;
	}

	printf("The sum of all odd numbers between %d to %d is %d\n", start, end, sum);

	return 0;
}
