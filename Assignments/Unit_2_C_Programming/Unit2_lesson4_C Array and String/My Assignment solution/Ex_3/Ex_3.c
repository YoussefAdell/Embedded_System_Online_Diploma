/*
 * Ex_3.c
 *
 *  Created on: Feb 21, 2023
 *      Author: Yousef
 */
#include "stdio.h"

int main(void)
{
	int r,c,i,j;
	printf("Enter rows and column of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&r,&c);
	int a[r][c];
	int t[c][r];

	//Ask user to enter matrix elements
	printf("\nEnter elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}

	//Printing Entered matrix
	printf("\nEntered Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	//Get transpose of matrix
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			t[i][j]=a[j][i];// get transpose of every element
		}
	}
	//Printing transpose of matrix
	printf("\nTranspose Of Matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}

