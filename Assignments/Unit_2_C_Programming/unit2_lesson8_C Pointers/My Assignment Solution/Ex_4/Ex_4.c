/*
 * Ex_4.c
 *
 *  Created on: Jun 11, 2023
 *      Author: Yousef
 */
#include <stdio.h>

int main()
{
	int size=0;

	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	int arr[size];
	int* ptr;
	ptr = &arr[size-1]; //place pointer on last array element

	printf("Input 5 number elements in the array : ");
	for(int i=0;i<size;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("element - %d : %d\n",(i+1),arr[i]);
	}


	printf("\n \nThe elements of array in reverse order are : \n");
	for(int i=0;i<size;i++,ptr--)
	{
		printf("element - %d : %d\n",(i+1),*ptr);
	}
	return 0;
}

