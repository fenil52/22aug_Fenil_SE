#include<stdio.h>
void main()
{
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even number");
    }
 else
    {
        printf("%d is odd number");
    }
}