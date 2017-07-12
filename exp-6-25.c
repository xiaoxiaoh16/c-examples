/*************************************************************************
    > File Name: exp-6-25.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 10:13:25 2017
 ************************************************************************/

/*
 * Write a C program to find LCM of two numbers
 *
 * Example
 *
 * Input
 * Input number1: 12
 * Input number2: 30
 * 
 * Output
 * LCM = 60
 *
 */

#include <stdio.h>

int main()
{
	int i, num1, num2, max, lcm=1;

	//Read two numbers from user
	printf("Enter two number one by one: ");
	scanf("%d%d", &num1, &num2);

	max = (num1 < num2) ? num1: num2;
	i = max;

	while(1)
	{
		if((i%num1 == 0) && (i%num2 == 0))
		{
			lcm = i;
			break;
		}
		i += max;
	}

	printf("The LCM of %d and %d is %d\n", num1, num2, lcm);
	return 0;
}
