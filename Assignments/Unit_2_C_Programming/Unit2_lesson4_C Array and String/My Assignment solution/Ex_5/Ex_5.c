/*
 * Ex_5.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main(void)
{
	int n,i,element;
	printf("Enter number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	int a[n];

	//printing elements
	for(i=0;i<n;i++)
	{
		a[i]=(i+1)+((i+1)*10);
		printf("%d ",a[i]);
	}

	//taking element from user
	printf("\n\nEnter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);

	//Searching for entered element
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
		{
			printf("\nNumber found at the location = %d",(i+1));
			break;
		}
	}
	return 0;
}
