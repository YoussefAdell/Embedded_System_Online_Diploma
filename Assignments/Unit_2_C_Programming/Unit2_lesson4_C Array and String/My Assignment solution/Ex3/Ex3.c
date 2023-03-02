/*
 * Ex3.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Yousef
 */
#include "stdio.h"
#include "string.h"

int main(void)
{
	char len=0;
	char text[100];
	char revrs_text[100];
	int i;
	printf("Enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(text);
	len=strlen(text)-1;

	//reverse entered string
	for(i=(len);(i>=0);i--)
	{
		revrs_text[len-i]=text[i];
	}
	revrs_text[len-i]='\0'; //assign null terminator to new string
	printf("Reverse string is : %s",revrs_text);
	return 0;
}
