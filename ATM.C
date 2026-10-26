#include<stdio.h>
int main()
{
int choice,epin,pin=1234;
float amount,balance=5000;
printf("Enter the pin:");
scanf("%d",&epin);
if(epin!=pin)
{
printf("Invalid pin\n");
return 0;
}
else
{
printf("Login success");
}
do
{
printf("\n atm menu\n");
printf(" 1.check balance\n");
printf("2.deposit money\n");
printf("3.withdraw money\n");
printf("4.exit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("balance=rs.%f\n",balance);
break;
}
case 2:
{
printf("enter the deposit amount:");
scanf("%f",&amount);
if(amount>0)
{
balance=balance+amount;
printf("money deposited successfully\n");
}
break;
}
case 3:
{
printf("enter withdrawal amount");
scanf("%f",&amount);
if(amount>0 && amount<=balance)
{
balance=balance-amount;
printf("withdrawal successfully\n");
}
else
{
printf("invalid amount or insufficient amount\n");
}
break;
}
case 4:
{
printf("thank you\n");
break;
}
default:
{
printf("invaild choice enter 1 to 4\n");
}
}
}while(choice !=4);
return 0;
}