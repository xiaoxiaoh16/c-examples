/*************************************************************************
    > File Name: exp-4-2.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 10:16:16 2017
 ************************************************************************/

/*
 * Write a C program to find maximum between three numbers using nested if.
 *
 * Example
 *
 * Input
 * Input num1: 10
 * Input num2: 20
 * Input num3: 15
 * 
 * Output
 * Maximum is: 20
 *
 */

#include <stdio.h>

int main()
{
	int num1, num2, num3, max;

	//read three numbers from user
	printf("Enter three numbers one by one: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	if(num1 > num2)
	{
		if(num1 > num3)
			max = num1;
		else
			max = num3;
	}
	else
	{
		if(num2 > num3)
			max=num2;
		else
			max=num3;
	}

	printf("The maximum between three numbers max(%d, %d and %d) ==> %d\n", num1, num2, num3, max);

	return 0;
}
