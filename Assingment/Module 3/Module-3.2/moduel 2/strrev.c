#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("enter the string");
    scanf("%s",&str);
    printf("your og string is:%s",str);
    strrev(str);
    printf("\nyour reversed string is:%s",str);
}