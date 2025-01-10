#include <stdio.h>
void main()
{
   int a[10],n,i;
   printf("Enter the size:");
   scanf("%d",&n);
   printf("Enter array elements");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]); 
   }
   for(i=n;i>0;i--)
    {
        printf("%d",a[i]);
    }
}
