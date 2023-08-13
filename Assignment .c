

/*//Insertion-->add an element at the given index

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
 int a[100],i,n,element,position;
 //inter array size
 printf("enter array size:");
 scanf("%d",&n);
 //enter the position
 printf("enter the position:");
 scanf("%d",&position);
 //enter the element to be insert
printf("enter the position:");
 scanf("%d",&element); 
 //enter elements in array
 for(i=0;i<n;i++)
 {
 printf("enter element %d:",i+1);
 scanf("%d",a[i]);}
 //swaping the index number
 for(i=0;i<n;i++)
    a[n-i]=a[n-1-i];
    a[position-1]=element;
 for(i=0;i<n+1;i++)
printf("%d",a[i]);


 return 0;

}*/