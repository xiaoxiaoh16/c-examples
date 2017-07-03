/*************************************************************************
    > File Name: exp-4-7.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 10:47:05 2017
 ************************************************************************/

/*
 * Write a C program to check whether a character is alphabet or not.
 *
 * Example
 *
 * Input
 * Input character: a
 * 
 * Output
 * 'a' is alphabet''
 *
 */

#include <stdio.h>

int main()
{
	char ch;

	//read a character from user
	printf("Enter a charactor: ");
	scanf("%c", &ch);

	if(((ch >= 'a') && (ch <= 'z')) ||((ch >= 'A') && (ch <= 'Z')))
		printf("'%c' is alphabet\n", ch);
	else
		printf("'%c' is not alphabet\n", ch);
	
	return 0;
}
