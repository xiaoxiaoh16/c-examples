/*************************************************************************
    > File Name: exp-5-3.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul  3 15:00:07 2017
 ************************************************************************/

/*
 * Write a C program to check whether an alphabet is vowel or consonant using switch case.
 * 
 * Example
 *
 * Input
 * Input alphabet: c
 * 
 * Output
 * 'c' is consonant''
 *
 */

#include <stdio.h>

int main()
{
	char ch;

	// read a character from user
	printf("Enter a character: ");
	scanf("%c", &ch);

	// switch the character variable
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			{
				printf("%c is wowel\n", ch);
				break;
			}
		default:
			printf("%c is consonant\n", ch);
	}

	return 0;
}
