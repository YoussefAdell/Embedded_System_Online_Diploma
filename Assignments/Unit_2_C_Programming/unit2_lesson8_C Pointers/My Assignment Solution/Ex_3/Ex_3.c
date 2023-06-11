/*
 * Ex_3.c
 *
 *  Created on: Jun 10, 2023
 *      Author: Yousef
 */
#include <stdio.h>

int main()
{
	int null_index=0;
	char str[30];
	char* ptr;

	printf("Input a string : ");
	fflush(stdin);fflush(stdout);
	gets(str);

	ptr = str;

	//need to get null position in entered array
	while(*ptr)
	{
		ptr++;
		null_index++;
	}
	ptr = &str[null_index-1];// got null position and assign address of last character to ptr
	printf("Reverse of the string is : ");
	for(int i=0;i<null_index;i++)
	{
		printf("%c",*ptr);
		ptr--;
	}

	return 0;
}

