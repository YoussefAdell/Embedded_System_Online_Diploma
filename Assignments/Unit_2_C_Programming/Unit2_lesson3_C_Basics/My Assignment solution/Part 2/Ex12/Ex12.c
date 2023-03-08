/*
 * Ex12.c
 *
 *  Created on: Jan 31, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	char check_char=0;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&check_char);
	if
	(
			((check_char>=65)&&(check_char<=90)) ||
			((check_char>=97)&&(check_char<=122))
	)
	{
		printf("\n%c is an alphabet",check_char);
	}
	else
	{
		printf("\n%c is not an alphabet",check_char);
	}
	return 0;
}

