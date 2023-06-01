//develop a simple calculator that can perform basic arithmetic operations such as addition,subtraction,multiplication and division.
#include<stdio.h>

int main()
{
 int num1,num2,ch;
 printf("1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n");
 printf("enter the num1\n");
 scanf("%d",&num1);
 printf("enter num2\n");
 scanf("%d",&num2);
 printf("enter your choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
        printf("The addition of num1 and num2 is %d\n",num1+num2);
        break;
  case 2:
        printf("The subtraction of num1 and num2 is %d\n",num1-num2);
        break;
  case 3:
        printf("The multiplication of num1 and num2 is %d\n",num1*num2);
        break;
  case 4:
        printf("The division of num1 and num2 is %d\n",num1/num2);
        break;
    default:
        printf("INVALID NUMBER");

 }
}
