/*// 1.
// b. Printing in reverse order
// b. Reversing the element in and array
// a. Reversing only first half of the element in an array*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
    int size,i,rev;
    printf("enter array size: ");
    scanf("%d",&size);//scaning array size
    int a[size];

    printf("enter array element-");
    for(i=0;i<size;i++)//taking array input 
    {
        printf("\nelement %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size/2;i++)//reversing the array
      {
        rev=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=rev;
      }
printf("the reversed elements are:");
for(i=0;i<size;i++)//printing the rev elements
printf("%d",a[i]);

      return 0;
    

}
