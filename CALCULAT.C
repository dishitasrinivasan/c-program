#include<stdio.h>
#include<conio.h>
int main()
{ int a,b;
char op;
clrscr();
printf("enter first number:");
scanf("%d",&a);
printf("enter an operator(+,-,*,/):");
scanf(" %c", &op);
printf("enter second number:");
scanf("%d", &b);
switch(op)
{
case'+':
printf("result=%d",a+b);
break;
case'-':
printf("result=%d",a-b);
break;
case'*':
printf("result=%d",a*b);
break;
case'/':
if(b!=0)
printf("result=%d",a/b);
else
printf("cannot divide by zero");
break;
default:
printf("invalid operator");
}
return 0;
}