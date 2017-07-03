/*************************************************************************
    > File Name: exp-4-10.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 11:26:30 2017
 ************************************************************************/

/*
 * Write a C program to check whether a character is uppercase or lowercase alphabet
 *
 */

#include <stdio.h>

int main()
{
	char ch;

	//read a character from user
	printf("Enter a character: ");
	scanf("%c", &ch);

	if((ch >= 'a') && (ch <= 'z'))
		printf("'%c' is lowercase alphabet\n", ch);
	else if((ch >= 'A') && (ch >= 'Z'))
		printf("'%c' is uppercase alphabet\n", ch);
	else
		printf("'%c' is not alphabet\n", ch);

	return 0;
}
