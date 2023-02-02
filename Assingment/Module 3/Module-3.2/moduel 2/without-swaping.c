#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);

    a=a+b; //a=5+10==>a=15
    b=a-b; //b=10-15==>b=-5
    a=a-b; //a=15+(-5)==>a=10

    printf("\nenter the a:%d",a);
    printf("\nenter the b:%d",b);
}