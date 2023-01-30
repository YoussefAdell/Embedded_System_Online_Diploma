/*
 * Ex5.c
 *
 *  Created on: Jan 30, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	char char1=0;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&char1);
	printf("\n ASCII value of %c = %d", char1,char1);
	return 0;
}
//Enter a character: G
//ASCII value of G = 71


