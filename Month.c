#include <stdio.h>
void main() {
int num;
printf("Enter the value of num from 1 to 12:");
scanf("%d",&num);
switch(num) {
case 1: printf("jan");

break;

case 2: printf("Feb");

break;

case 3: printf("march");

break;

case 4: printf("April");

break;

case 5: printf("May");

break;

case 6: printf("june");

break;

case 7: printf("july");

break;

case 8: printf("Aug");

break;

case 9: printf("sep");

break;

case 10: printf("oct");

break;

case 11: printf("Nov");

break;

case 12: printf("Dec");

break;

default: printf("the no is wrong ");

break;
}
}
