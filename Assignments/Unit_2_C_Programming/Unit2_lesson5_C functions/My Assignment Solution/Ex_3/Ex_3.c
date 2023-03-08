/*
 * Ex_3.c
 *
 *  Created on: Mar 7, 2023
 *      Author: Yousef
 */
#include "stdio.h"
#include "string.h"

char text[100];
char revrs_text[100];

char *reverseString(char len, int i);

int main(void)
{
	char len=0;
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	gets(text);
	len = strlen(text)-1;
	printf("%s",reverseString(len, len)); // fun_name(len, i{same as len});
	return 0;
}


char *reverseString(char len, int i)
{
	revrs_text[len-i]=text[i];
	if(i>=1)
		return reverseString(len, i-1);
	else
	{
		revrs_text[len+1]='\0'; //assign null terminator
		return revrs_text;
	}
}
