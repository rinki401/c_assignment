#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("r1 = %f, r2 = %f", r1, r2);
    }
    else if(d == 0)
    {
        r1 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("r1 = r2 = %f", r1);
    }
    else
    {
        float real = -b / (2*a);
        float imag = sqrt(-d) / (2*a);
        printf("Roots are complex:\n");
        printf("r1 = %f + %fi\n", real, imag);
        printf("r2 = %f - %fi", real, imag);
    }

    return 0;
}
