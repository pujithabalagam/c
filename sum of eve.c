#include <stdio.h>
void main() {
int n,i,sum=0;
printf("Enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    if(i%2==0)
    {
   sum=sum+i; 
    }
}
printf("The sum is:%d",sum);
}
