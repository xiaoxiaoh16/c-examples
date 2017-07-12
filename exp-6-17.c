/*************************************************************************
    > File Name: exp-6-17.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 14:53:36 2017
 ************************************************************************/

/*
 * Write a C program to enter any number and check whether the number is palindrome or not.
 *
 * Example
 *
 * Input
 * Input any number: 121
 * 
 * Output
 * 121 is palindrome
 *
 */

#include <stdio.h>

int main()
{
	int num, oldNum, reverse=0;

	//read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	oldNum = num;
	printf("The number %d ", num);

	while(num != 0)
	{
		reverse = (reverse * 10) + (num % 10);
		num /= 10;
	}

	if(oldNum == reverse)
		printf("is palindrome\n");
	else
		printf("is not palindrome\n");

	return 0;
}
