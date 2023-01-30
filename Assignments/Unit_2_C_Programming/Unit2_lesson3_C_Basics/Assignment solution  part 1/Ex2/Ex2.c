/*
 * Ex2.c
 *
 *  Created on: Jan 29, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	int entered_int=0;
	printf("Enter an integer: "); 	//Enter a integer: 25
	fflush(stdin); fflush(stdout);
	scanf("%d",&entered_int);		//You entered: 25
	printf("\n You entered: %d", entered_int);
	return 0;
}
