/*************************************************************************
    > File Name: exp-4-9.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 11:03:30 2017
 ************************************************************************/

/*
 * Write a C program to input any character and check whether it is alphabet, digit or special character.
 *
 * Let us make a fresh definition again -
 *
 * A character is alphabet if it in given range a-z or A-Z.
 * A character is digit if it is in range of 0-9.
 * A character is special symbol character if it neither an alphabet nor a digit.
 *
 */

#include <stdio.h>

int main()
{
	char ch;

	//read a character from user
	printf("Enter a character: ");
	scanf("%c", &ch);

	if(((ch >= 'a') && ( ch <= 'z')) || ((ch >= 'A') && (ch >= 'Z')))
		printf("%c is alphabet\n", ch);
	else if((ch >= '0') && (ch <= '9'))
		printf("%c is digit.\n", ch);
	else
		printf("%c is special symbol character\n", ch);

	return 0;
}
