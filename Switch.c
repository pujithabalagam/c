#include <stdio.h>
void main()
{

int a,b;
char op;


printf("Enter the value of a,b and op"); scanf("%d%d %c", &a, &b, &op);

switch (op)

 {
case '+':
printf("The addition is %d",a+b);
break;
case '-':
printf("The sub is %d",a-b);
break;
case '*':
printf("The multiple is %d",a*b);
break;
case '/':
printf("The division is %d",a/b);
break;
case '%':
printf("The remainder is %d",a%b);
break;
default:
printf("Invalid operator");
break;
 }
 }
