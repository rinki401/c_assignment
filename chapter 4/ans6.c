#include <stdio.h>

int main() {
    float principal, rate, time, SI;

    printf("Enter Principal, Rate and Time (years): ");
    scanf("%f %f %f", &principal, &rate, &time);

    SI = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
