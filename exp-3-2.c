/*************************************************************************
    > File Name: exp-3-2.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 08:58:03 2017
 ************************************************************************/

/*
 * Write a C program to find maximum between three numbers using conditional/ternary operator.
 *
 */

#include <stdio.h>

int main()
{
	int num1, num2, num3, max;

	/* Read three numbers from user */
	printf("Enter three numbers one by one: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	max = ((num1 > num2) && (num1 > num3))? num1:((num2 > num3)? num2: num3);

	printf("The maximum bewteen three numbers (%d, %d and %d ) ==> %d\n", num1, num2, num3, max);

	return 0;
}
