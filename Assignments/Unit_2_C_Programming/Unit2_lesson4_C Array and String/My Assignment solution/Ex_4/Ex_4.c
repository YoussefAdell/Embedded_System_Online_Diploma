/*
 * Ex_4.c
 *
 *  Created on: Feb 23, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main(void)
{
	int n,i,element,location;
	printf("Enter number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	int a[n];
	int a_new[n+1];

	//printing elements
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
		printf("%d ",a[i]);
	}

	//taking element from user
	printf("\n\nEnter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);

	//taking location from user
	printf("\nEnter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	//inserting new element
	for(i=0;i<(n+1);i++)
	{
		if(i<(location-1))
		{
			a_new[i]=a[i];
		}

		if(i==(location-1))
		{
			a_new[i]=element;
		}

		if(i>(location-1))
		{
			a_new[i]=a[i-1];
		}

		printf("%d ",a_new[i]);
	}
	return 0;
}


