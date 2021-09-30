#include<stdio.h>
main()
{printf("Food item-\n1.Pizza,Rs-239\n2.Burger,Rs-129\n3.Pasta,Rs-179\n4.French fries,Rs-97\n5.Sandwich,Rs-149");
int choice=0;
printf("\nEnter no. from 1 to 5-",&choice);
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("food item-Pizza,\n Price-Rs239");
	break;
case 2:
	printf("food item-Burger,\n Price-Rs129");
    break;
case 3:
	printf("food item-Pasta,\n Price-Rs179");
	break;
case 4:
	printf("food item-French fries,\n Price-Rs97");
	break;
case 5:
	printf("food item-Sandwich,\n Price-Rs149");
	break;
default:printf("invalid choice");		
}
return 0;
}
