//Find the second largest element in an array
#include <stdio.h>
#include <limits.h>

int main()
{
  int l1,l2,size;
  printf("Enter array size:");
  scanf("%d",&size);//array size
  int a[size];
  printf("Enter array elemnts:\n");

  for(int i=0;i<size;i++)//input
    {
         printf("Enter element %d: ",i+1);
         scanf("%d",&a[i]);
    }
    l1=INT_MIN;//integer least value
  
    l2=INT_MIN;
  

  for(int i=0;i<size;i++)
    {
      if(a[i]>l1)
      {
        l2=l1;
        l1=a[i];
      }
      else if(a[i]>l2 &&  a[i]<l1)
      {
        l2=a[i];
      }

    }
printf("\n the maximum integer is : %d",l1);
printf("\nthe second maximum integer is: %d",l2);



  return 0;     
}
