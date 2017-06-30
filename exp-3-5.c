/*************************************************************************
    > File Name: exp-3-5.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 09:43:54 2017
 ************************************************************************/

/*
 * Write a C program to check whether character is an alphabet or not using conditional/ternary operator.
 *
 */

#include <stdio.h>

int main()
{
	char ch;

	//read a character from user
	printf("Enter any character: ");
	scanf("%c", &ch);

	printf("%c is %s\n", ch,  (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? "alphabet" : "not alphabet"));
	
	return 0;
}
