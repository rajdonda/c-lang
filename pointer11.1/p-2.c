#include<stdio.h>
void swap_numbers(int *ptr1, int *ptr2) {
  int thirdvar;
  thirdvar = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = thirdvar;
}
void main(){
	int var;
	int *ptr;
	
	printf("Enter any value for var...",var);
	scanf("%d",&var);
	
	printf("Enter any value for ptr...",ptr);
	scanf("%d",&ptr);
	
	printf("var:-\t%d\n",var);
	printf("PTR:-\t%d\n",ptr);
	
	swap_numbers(&var, &ptr);
	printf("var:-\t%d\n",var);
	printf("PTR:-\t%d\n",ptr);
}

