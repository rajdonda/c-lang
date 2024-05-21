#include<stdio.h>
void data();
void sum(int a,int b);
void min(int a,int b);
void mul(int a,int b);
void div(int a,int b);
void pre(int a,int b);
void error();

main(){
	
	data();
	
}

void data()
{
	int a,b,ch;
	printf("enter no of a:- ");
	scanf("%d",&a);
	printf("enter no of b:- ");
	scanf("%d",&b);
	printf("enter choise 1 press to sum\n");
	printf("enter choise 2 press to min\n");
	printf("enter choise 3 press to mul\n");
	printf("enter choise 4 press to div\n");
	printf("enter choise 5 press to per\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			sum(a,b);
		break;
		case 2:
			min(a,b);
		break;
		case 3:
			mul(a,b);
		break;
		case 4:
			div(a,b);
		break;
		
		case 5:
			per(a,b);
		break;
		default:
			error();
		
	}
	
}

void sum(int a,int b)
{
	printf("sum = %d",a+b);
}
void min(int a,int b)
{
	printf("min = %d",a-b);
}
void mul(int a,int b)
{
	printf("mul = %d",a*b);
}
void div(int a,int b)
{
	printf("div = %d",a/b);
}
void per(int a,int b)
{
	printf("per = %d",a%b);
}
void error()
{
	printf("please enter valid choish:-");
}

