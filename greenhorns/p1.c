#include <stdio.h>

int main() {
    int fahrenheit, celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2d\n", fahrenheit);

}
