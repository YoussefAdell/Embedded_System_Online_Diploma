/*
 * Ex_5.c
 *
 *  Created on: Jun 11, 2023
 *      Author: Yousef
 */
#include <stdio.h>

struct SEmployee{
	char m_empName[50];
	int m_empID;
};

int main()
{
	struct SEmployee emp_1={"Rio",1000},emp_2={"Lara",1001},emp_3={"Alex",1002};
	struct SEmployee *ptr_arr[3]={&emp_1,&emp_2,&emp_3};
	struct SEmployee *(*pptr)[3] = &ptr_arr;

	printf("Employee Name : %s",(**(*pptr+2)).m_empName);
	printf("\nEmployee ID : %d",(**(*pptr+2)).m_empID);
	return 0;
}

