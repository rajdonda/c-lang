#include<stdio.h>
main(){
	
	char str[]="yash";
	int length=strlen(str);
	int i,sum=0;
	
	
	
	printf("%s",strlwr(str)); 
	for(i=0;i<length;i++){
		printf("\n%c = %d ",str[i],str[i]);
		sum = sum + str[i];
	}
	
	printf("\n %d ",sum);

}
