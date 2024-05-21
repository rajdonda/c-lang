#include <stdio.h>

int main()
{
	int size;
	printf("Enter Size of Array:-");
	scanf("%d",&size);
	int i=0;
    int arr[size];
	
	for (i = 0; i < size; i++){
		printf("A[%d]",i);
		scanf("%d",&arr[i]);
	}
	
    printf("Array elements: \n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\nSquare of array elements: \n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i] * arr[i]);

    printf("\n");

}
