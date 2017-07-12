/*************************************************************************
    > File Name: exp-6-10.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 10:32:47 2017
 ************************************************************************/

/*
 * Write a C program to count number of digits in any number.
 *
 * Example
 *
 * Input
 * Input num: 35419
 * 
 * Output
 * Number of digits: 5
 *
 */

#include <stdio.h>
#include <math.h>	//used for log() function

int main()
{
	long long num;
	int count = 0;

	printf("Enter any numbers: ");
	scanf("%lld", &num);

	count = log10(num) + 1;   //using log10 function
	/* 
	method 2: using while loop
	while(num != 0)
	{
		count++;
		num /= 10;
	}
	*/
	printf("Total digits is %d\n", count);

	return 0;
}
