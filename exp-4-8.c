/*************************************************************************
    > File Name: exp-4-8.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 10:53:02 2017
 ************************************************************************/

/*
 * Write a C program to input any alphabet and check whether it is vowel or consonant.
 *
 * Example
 *
 * Input
 * Input character: a
 * 
 * Output
 * 'a' is vowel''
 *
 */

#include <stdio.h>

int main()
{
	char ch;

	//read a character from user
	printf("Enter a character from user: ");
	scanf("%c", &ch);

	if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
		printf("'%c' is vowel\n", ch);
	else if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
		printf("'%c' is consonant\n", ch);
	else
		printf("'%c' is not alphabet\n", ch);

	return 0;
}
