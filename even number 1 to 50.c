#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

int i, sum=0;
printf("The even numbers between 1 to 50:");
for(i=2;i<=50;i=i+2){

        sum=sum+i;
        printf("\n %d",i);
}
printf("\n --------------------------------------------");
        printf("\n %d",sum);

return 0;

}
