#include <stdio.h>
main() {
    int n, first, last, sum;

    printf("Enter any number: ");
    scanf("%d", &n);

    first_digit = n;
    while (first >= 10) {
        first /= 10;
    }

    last = n % 10;

    sum = first + last;

    printf("The sum of the first and the last digit: %d\n",sum);

}
