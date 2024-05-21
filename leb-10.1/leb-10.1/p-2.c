#include <stdio.h>

int iso(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        return 1; 
    } 
	else {
        return 0; 
    }
}

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (iso(num)) {
        printf("The given number is divisible by both 3 & 5.\n");
    } else {
        printf("The given number is not divisible by both 3 & 5.\n");
    }

    return 0;
}
