/*
 * Ex1.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main(void)
{
	char ch, ch_freq=0;
	char text[100];
	int i;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(text);

	printf("\nEnter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	for(i=0;i<100;i++)
	{
		if(text[i]==ch)
			ch_freq++;
	}

	printf("\nFrequency of %c = %d",ch,ch_freq);

	return 0;
}

