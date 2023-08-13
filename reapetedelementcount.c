//write a program to observe repeated element and how many times reapeted
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
   int i,j,size,count;
  printf("Enter array size:");
  scanf("%d",&size);//array size
  int a[size];
  printf("Enter array elemnts:\n");

  for(int i=0;i<size;i++)//input
    {
         printf("Enter element %d: ",i+1);
         scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {   count=0;
        for(j=0;j<size;j++)
        {if(a[i]==a[j])
        count++;
        }

        printf("\n%d element is reapeted %d times",i+1,count);
    }


    return 0;
}