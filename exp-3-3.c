/*************************************************************************
    > File Name: exp-3-3.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 09:10:30 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is even or odd using conditional/ternary operator.
 * 
 * Example:
 *
 * Input number: 10
 *
 * Output: Even number
 *
 */

#include <stdio.h>

int main()
{
	int num;

	//read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	//(num % 2 == 0)? printf("%d is even\n", num): printf("%d is odd\n", num);
	printf("%d is %s\n", num, (num%2 == 0? "even" : "odd"));

	return 0;
}
