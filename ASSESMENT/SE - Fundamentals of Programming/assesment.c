#include<stdio.h>
void main()
{
    int a,b,choice;
    printf("------------------------MENU-------------------------------");
    printf("\n1. addition\n2. substraction\n3. multiplication\n4. division\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("\nenter first number:");
    scanf("%d",&a);
    printf("\nenter second number:");
    scanf("%d",&b);
    switch(choice) 
    {
        case 1:
              printf("\naddition =");
              break;
        case 2:
              printf("\nsubstraction =");
              break;
        case 3:
              printf("\nmultiplication =");
              break;
        case 4:
              printf("\ndivision =");
              break;
        default:
               printf(" invalid choice !!!!");
               break;      
        
    }
} 