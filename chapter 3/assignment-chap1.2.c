#include <stdio.h>

int main() {
    float f=123.1265;
    printf("%f\t",f);
    printf("%.2f\t",f);
    printf("%.3f\t",f);

    int a=625,b=2394,c=12345;
    printf("%5d,%5d,%5d\n",a,b,c);
    printf("%3d,%4d,%5d\n",a,b,c);

    int d=98;
    char ch='c';
    printf("5c,%d\n",d,ch);

    float a1,b1,a2,b2,a3,b3;
    a1=2;
    b1=6.8;
    a2=4.2;
    b2=3.57;
    a3=9.82;
    b3=85.673;
    printf("%3.lf,%4.2f\n",a1,b1);
    printf("%5.lf,%6.2f\n",a2,b2);
    printf("%7.lf,%8.2f\n",a3,b3);

    printf("%10s\n","India");
    printf("%4s\n","India");
    printf("%.2s\n","India");
    printf("%5.2s\n","India");
}

