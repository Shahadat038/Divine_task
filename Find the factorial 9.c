#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,fact=1;
int n=9;
if(n<0)
{
printf("negative numbers are not allowed");
}
else if(n==0)
printf("Factorial of %d is:%d",n,fact);
else
{
for(i=2;i<=n;i++)
fact=fact*i;
printf("Factorial of %d is: %d \n",n,fact);
}
return 0;
}
