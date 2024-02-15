#include <stdio.h>
int main() {
    float c, f;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2fF\n", f);
    if (f > 100.4) {
        printf("Fever.\n");
    } else {
        printf("Normal.\n");
    }
}