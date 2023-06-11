/*
 * Ex_2.c
 *
 *  Created on: Jun 10, 2023
 *      Author: Yousef
 */
#include <stdio.h>

int main()
{
	char arr[26];
	char* ptr;
	ptr = arr;

	for(int i=0;i<26;i++)
	{
		*ptr='A'+i;
		printf("%c ",*ptr);
		ptr++;
	}

	return 0;
}

