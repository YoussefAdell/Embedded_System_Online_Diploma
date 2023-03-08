/*
 * Ex9.c
 *
 *  Created on: Jan 30, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	char c_myChar=0;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c_myChar);
	if
	(
			(c_myChar=='a')|(c_myChar=='A')|
			(c_myChar=='e')|(c_myChar=='E')|
			(c_myChar=='i')|(c_myChar=='I')|
			(c_myChar=='o')|(c_myChar=='O')|
			(c_myChar=='u')|(c_myChar=='U')
	)
		printf("\n%c is a vowel.",c_myChar);
	else
		printf("\n%c is a consonant.",c_myChar);
	return 0;
}

