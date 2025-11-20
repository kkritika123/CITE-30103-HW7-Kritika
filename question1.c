#include <stdio.h>

float toCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = toCelsius(f);

    printf("Celsius = %.2f\n", c);

    return 0;
}

