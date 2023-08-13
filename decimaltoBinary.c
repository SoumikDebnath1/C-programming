//write a program for decimal to binary
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[20]={0},i=0,rmndr,n,rev;
    printf("Enter integer: ");
    scanf("%d",&n);
   while(n!=0)
    {
        rmndr=n%2;
        n=n/2;
        a[i]=rmndr;
        i++;
    }

    for(int j=i-1;j>=0;j--)
     printf("%d ",a[j]);
     return 0;
}