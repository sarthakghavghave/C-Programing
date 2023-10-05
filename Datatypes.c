#include<stdio.h>
void main()
{
    // int a;
    // char b;
    // float c;
    // double d;

    // printf("Int:");
    // scanf("%d",&a);

    // printf("Char:");
    // scanf("%s",&b);

    // printf("float:");
    // scanf("%f",&c);

    // printf("double:");
    // scanf("%lf",&d);

    // printf("int=%d\nchar=%c\nfloat=%.2f\ndouble=%lf",a,b,c,d);


    //Logical solution

    char e[100];

    int h;
    printf("Enter the number of charechters:");
    scanf("%d",&h);

    printf("Name:");

    for(int i=0;i<h;i++)
    {
        scanf("%s",&e[i]);
    }

    printf("The name:");
    
    for(int i=0;i<h;i++)
    {
        printf("%c",e[i]);
    }


    // Solution with gets, puts
    
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
}