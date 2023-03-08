/*
 * Ex13.c
 *
 *  Created on: Jan 31, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main()
{
	int i=0 , n=0 , sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+= i;
	printf("\nSum = %d",sum);
	return 0;
}

