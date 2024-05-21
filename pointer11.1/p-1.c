#include<stdio.h>
main(){
	
	int a;
	int *ptr;
	
	printf("enter vlue of a:-");
	scanf("%d",&a);
	
	ptr=&a;
	
	printf("value of a :- %d \n",a);
	printf("value of ptr :-%d\n",*ptr);
	
	
	
	printf("value of a :- %x \n",&a);
	printf("value of ptr :-%x",&*ptr);
	
}
