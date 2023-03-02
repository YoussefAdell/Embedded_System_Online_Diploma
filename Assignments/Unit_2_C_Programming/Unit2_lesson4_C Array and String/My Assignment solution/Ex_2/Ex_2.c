/*
 * Ex_2.c
 *
 *  Created on: Feb 21, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main(void)
{
	int n=0,i;
	printf("Enter the numbers of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	float a[n];
	float sum=0;
	//user enter matrix data
	for(i=0;i<n;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	printf("Average = %.2f",sum/n);
	return 0;
}


