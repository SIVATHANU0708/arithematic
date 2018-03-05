#include<stdio.h>
int main()
{
int n,a,b,sum=0,i;
printf("enter the number of terms:");
scanf("%d",&n);
printf("enter the first no:");
scanf("%d",&a);
printf("enter the difference:");
scanf("%d",&b);
for(i=0;i<n;i++)
{
sum=sum+a;
a=a+b;
}
printf("%d",sum);
return 0;
}
