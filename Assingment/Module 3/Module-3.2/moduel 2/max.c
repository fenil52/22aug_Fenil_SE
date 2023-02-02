#include<stdio.h>
void main()
{
      int a[5],i,max;
      printf("\n Enter 5 Digit number=");
      for ( i = 0; i < 5; i++)
      {
      scanf("%d",a);
      }
      
     
    max= a[0];
      for(i=0; i<5 ; i++);
      {
        if(a[i]>max)
        {
            max= a[i];
        }
      }
      printf("\n Max is %d,",a[i]);

}     