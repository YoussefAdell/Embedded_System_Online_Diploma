/*
 * Ex_4.c
 *
 *  Created on: Jun 2, 2023
 *      Author: Yousef
 */
#include "stdio.h"

struct Sstudent
{
	int m_roll;
	char m_name[100];
	int m_marks;
};

int main()
{
	struct Sstudent students[10];
	printf("Enter information of students: \n \n");

	for(int i=0; i<10 ;i++)
	{
		students[i].m_roll=i+1;
		printf("For roll number %d \n",students[i].m_roll);

		printf("Enter name: ");
		fflush(stdout); fflush(stdin);
		gets(students[i].m_name);

		printf("Enter marks: ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&students[i].m_marks);
		printf("\n");
	}
	printf("\n \nDisplaying information of students\n \n");

	for(int i=0; i<10 ;i++)
		{
			students[i].m_roll=i+1;
			printf("Information for roll number %d :\n",students[i].m_roll);
			printf("Name: %s\n",students[i].m_name);
			printf("Marks: %d\n \n",students[i].m_marks);
		}

	return 0;
}



