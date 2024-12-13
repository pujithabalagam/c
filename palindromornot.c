#include <stdio.h>

void main() {
    int n,rev=0,rem,num;
    printf("enter the value:");
    scanf("%d",&n);
    num=n;
    while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(num==rev)
        {
        printf("the number is palindrom:%d",rev);
    }
    else
    {
        printf("the number is not a palindrom number");
    }
}
