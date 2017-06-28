#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the limit number:);
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("The total is %d",sum);
return 0;
}
