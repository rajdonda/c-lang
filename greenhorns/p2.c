#include<stdio.h>
main (){
	int growsalary, salary, HTA, DA, TA;
	
	printf("Enter your salary:",salary);
	scanf("%d",&salary);
	
	HTA= salary * 10/100;
	DA= salary * 5/100;
	TA= salary * 8/100;
	
	growsalary=salary+HTA+DA+TA;
	
	printf("grows : %d",growsalary);
}
