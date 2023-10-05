#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;

    printf("Int:");
    scanf("%d",&a);

    printf("Char:");
    scanf("%s",&b);

    printf("float:");
    scanf("%f",&c);

    printf("double:");
    scanf("%lf",&d);

    printf("int=%d\nchar=%c\nfloat=%.2f\ndouble=%lf",a,b,c,d);
}