#include <stdio.h>
#include<stdlib.h>
void main() {
int n,i,sumodd=0,sumeven=0;
printf("Enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    if(i%2==0)
    {
   sumeven=sumeven+i;
    }
    else{
        sumodd=sumodd+i;
    }
}
printf("The sum diff is:%d",abs(sumeven-sumodd));
}
