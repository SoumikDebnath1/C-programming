// 4. Write a C program to convert specified days into years, weeks and days. Go to the editor
// Note: Ignore leap year.

// Test Data :
// Number of days : 1329
// Expected Output :
// Years: 3
// Weeks: 33
// Days: 3
#include <stdio.h>
int main()
{
int days, years,weeks,n;
printf("Enter the total day=");
scanf("%d",n);
years=(int)n/365;
weeks=(n-(years*365))/7;
days=n-(years*365)-(weeks*7);
printf("\nyears: %d",years);
printf("\nweeks: %d",weeks);
printf("\ndays: %d",days);


return 0;
}

 
 
 









/*//1.program to print last digit of a given number
    int num,lastdigit;
    printf("Enter the number=");
    scanf("%d",&num);
    lastdigit=num%10;
    printf("The last digit will be =%d",lastdigit);
    return 0;*/
/*//2.program to print the middle digit of a given 3 digit number
 int num,lastdigit;
    printf("Enter the 3 digit number=");
    scanf("%d",&num);
    lastdigit=(num/10)%10;
    printf("The middle digit will be =%d",lastdigit);
    return 0;*/
/*//3.swap data of two integer variable

 int a,b,c;
 printf("Enter a=");
 scanf("%d",&a);
 printf("Enter b=");
 scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf(" the number a will be %d and number b will be %d",a,b);
 return 0;
   */
/*//4.data swaping without using third variable

int a,b;
 printf("Enter a=");
 scanf("%d",&a);
 printf("Enter b=");
 scanf("%d",&b);
 a=a+b;
 b=a-a;
 a=a-b;

 printf(" the number a will be %d and number b will be %d",a,b);
 return 0;*/
/*//5.creat a program to check prime number

int i,a;
printf("enter the number=");
scanf("%d",&a);
for(i=2;i<=a-1;i++)
   if(a%i==0)
   break;
   if(i==a)
      printf(" the number is a prime number");
     
   
     else{
    printf("the number is not prime");
   }


return 0;*/
/*//6.print LCM of two number

int a,b,L;
printf("Enter the numbers a,b=\n");
scanf("%d\n%d",&a,&b);
for(L=a>b?a:b;L<=a*b;L++)
//for loop understand 
//her maximum LC will be a*b,as per the rules we know we have to 
//see which number is less and try to find till  a*b from the samall number
//which are giving remainder 0 while deviding 
{
   if(L%a==0 && L%b==0){
      printf("LCM is %d ",L);
      break;
}

}
return 0;*/
/*//7.creat a function to calculate n!
int x,y;
printf("Enter sthe number x =");
scanf("%d",&x);
y=Nfactorial(x);


printf("The factorial on n will be =%d",y);

}
int Nfactorial(int n)
{
  int a=1;

for(int i=n;i>1;i--)
{
a=a*i;
}

return a;*/
/*//8.check whether a year is leap year or not
   int a;
   printf("enter year =");
   scanf("%d",&a);
   if((a%4==0&&a%100!=0)||(a%400==0))
   {
       printf("leap year");

   }else{
           printf("not a leap year");

   }
return 0;*/
/*//9. check if a character is lower or upper case
   char ch;
   printf("enter chacter =");
   scanf("%c",&ch);
   printf("%c in upper case %c",ch,toupper(ch));
*/
/*//10.program to write name without any semicolon.
if(printf("Soumik Debnath")&&getch())
{}   */
/*//11.check weather a number is even or odd
int a;
printf("Enter a number =");
scanf("%d",&a);
(a%2==0)?printf("The number is an even number"):printf("The number is a odd number");*/
/*//incomplete 12.program for fibonaki series 1 1 2 3 5 8 13 21 ... using recursion
int a;
printf("enter number of turm=");
sacnf("%d",&a);
for(int i=1;i<=a;i++)
{
   printf("%d",fib(i));
}
getch();
}
int fib(int n)
{*/
/*//13.print  HCF of two number
int a,b,h;
printf("Enter the numbers a,b=\n");
scanf("%d\n%d",&a,&b);
for(h=a<b?a:b;h>=1;h--)

   if(a%h==0 && b%h==0){
      break;
}
      printf("HCf is %d ",h);
return 0;*/
/*//14.write a program to calculate factors of a number
  // Also check the number  is a perfect number or not


int main()
{ 
int n,a,sum=0;
printf("Enter the number =");
scanf("%d",&n);
printf("The factors to the number are =");
for(int fact=1;fact<=n;fact++)
{a=n%fact;
if(a==0)
{printf("%d ",fact);
 sum=sum+fact;
}
}
printf("\n");
if((sum-n)==n)
printf("The number %d is a perfect number",n);
else
printf("The number %d is not a perfect number",n);

return 0;
}*/
/*//15.convert a integer taken as input into words
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main() {

  int n, rev= 0,a,c,d;


       printf("Enter an integer: ");
  scanf("%d", &n);
  a=n;
  for(;n!=0;n=n/10)
  rev=(rev*10)+(n%10);
  
  for(;rev>0;rev/=10)
{
   d=rev%10;
   switch(d)
   {
      case 0:printf("zero ");
             break;
      case 1:printf("one ");
             break;
      case 2:printf("two ");
             break;
      case 3:printf("three ");
             break;
      case 4:printf("four ");
             break;
      case 5:printf("five ");
             break;
      case 6:printf("six ");
             break;
      case 7:printf("seven ");
             break;
      case 8:printf("eight ");
             break;
      case 9:printf("nine ");
             break;
      default:printf("invalid input");
             break;
   }
}
for(int i=a;i>0;i/=10)
{
       c=i%10;
       if(c==0)
       printf("zero ");
       else 
       break;
}
return 0;
}*/
/*//16.write a recursive program to calculate x^y
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h> 
int power(int a,int b);
int main()
{
  int x,y;
  printf("Enter x=");
  scanf("%d",&x);
  printf("Enter y=");
  scanf("%d",&y);
  printf("x^y will be =%d",power(x,y));


}
int power(int a,int b)
{
    if(b==0)
    return 1;
    else
    return(a*pow(a,b-1));
}*/
/*//17.write a recursive function to calculate HCF of two number
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h> 

int main()
{
   
}
int HCF(int a,int b)
{
  int h;
  a>b?a:b;

  if(a%10==0 && b%10==0)
return h; 
  */
 /*// write a program to print pascals triangle 
/*       1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1


#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main() 
{
 int r;
 scanf("%d",&r);
       for(int row=0;row<r;row++)
       {

              
              for(int j=0;j<r-row;j++)
                     printf(" ");
              for(int k=0;k<=row;k=k+1)
                    {
                     printf("* ");
                    }
             
              printf("\n");
       }
 return 0;
 
 
 
 //for(int i=1;i<=n;i++)
 //f=f*i;

}*/
/*// 18.write a program to check  whether an input character is a digit or not


#include <stdio.h>
#include <ctype.h>
#include <conio.h>
void main() 
{
char ch;
printf("enter any character =");
scanf("%c",&ch);
if(ch>=0&&ch<=9)
{
       printf("digit");
}
else{
       printf("not digit");
}
 
 
 
 

}*/