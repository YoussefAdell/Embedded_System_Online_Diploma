/*
 * Ex2.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main(void)
{
	char st_len=0;
	char text[100];
	int i;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(text);

	for(i=0;(i<100)&&(text[i]!='\0');i++)
	{
		st_len++;
	}
	printf("\nLength of string: %d",st_len);
	return 0;
}
