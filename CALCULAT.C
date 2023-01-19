#include<stdio.h>
#include<conio.h>
#include<math.h>
int k=0;
float result=0;

int menu()
{
int ch;
printf("\n\n******MINI CALCULATOR******");
printf("\n*MENU*");
printf("\nPress 1:To add");
printf("\nPress 2:To subtract");
printf("\nPress 3:To multiply");
printf("\nPress 4:To divide");
printf("\nPress 5:To get remainder");
printf("\nPress 6:To Clear the existing data");
printf("\nPress 7:To Exit");
printf("\nEnter your Choice:");
scanf("%d",&ch);
return(ch);
}

void add()
{
	float a,b;
	if(k)
	{
		printf("\nEnter new number:");
		scanf("%f",&a);
		result=result+a;
		printf("\nresult=%f",result);
	}
	else
	{
	printf("\nenter number1:");
	scanf("%f",&a);
	printf("\nenter number2:");
	scanf("%f",&b);
	result=a+b;
	printf("\nresult=%f",result);
	}
}

void sub()
{
	float a,b;
	if(k)
	{
		printf("\nEnter new number:");
		scanf("%f",&a);
		result=result-a;
		printf("\nresult=%f",result);
	}
	else
	{
	printf("\nenter number1:");
	scanf("%f",&a);
	printf("\nenter number2:");
	scanf("%f",&b);
	result=a-b;
	printf("\nresult=%f",result);
	}
}

void mul()
{
	float a,b;
	if(k)
	{
		printf("\nEnter new number:");
		scanf("%f",&a);
		result=result*a;
		printf("\nresult=%f",result);
	}
	else
	{
	printf("\nenter number1:");
	scanf("%f",&a);
	printf("\nenter number2:");
	scanf("%f",&b);
	result=a*b;
	printf("\nresult=%f",result);
	}
}

void div()
{
	float a,b;
	if(k)
	{
		printf("\nEnter new number:");
		scanf("%f",&a);
		result=result/a;
		printf("\nresult=%f",result);
	}
	else
	{
	printf("\nenter number1:");
	scanf("%f",&a);
	printf("\nenter number2:");
	scanf("%f",&b);
	result=a/b;
	printf("\nresult=%f",result);
	}
}

void rem()
{
	int a,b;
	int result;
	if(k)
	{
		printf("\nEnter new number:");
		scanf("%d",&a);
		result=result%a;
		printf("\nresult=%d",result);
	}
	else
	{
	printf("\nenter number1:");
	scanf("%d",&a);
	printf("\nenter number2:");
	scanf("%d",&b);
	result=a%b;
	printf("\nresult=%d",result);
	}
}

void clear()
{
	printf("\nOld data cleared");
	result=0;
	k=0;
}

void main()
{
	int l=0;
	while(1)
	{
	clrscr();
	printf("\nOld result:%f",result);
	switch(menu())
	{
	case 1:add();
		k=1;
		break;
	case 2:sub();
		k=1;
		break;
	case 3:mul();
		k=1;
		break;
	case 4:div();
		k=1;
		break;
	case 5:rem();
		k=1;
		break;
	case 6:clear();
		break;
	case 7:l=1;
		break;
	default:printf("\ninvalid choice");
	}
	if(l==1)
	break;
	getch();
}
}

