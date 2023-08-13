
#include <stdio.h>
//fibonaki series
int main()
{
 int a=0,b=1,c,i,n;
 printf("number of turms to be printed =");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   c=a+b;
   printf("%d ",c);
   a=b;
   b=c;
   

 }
 return 0;
}