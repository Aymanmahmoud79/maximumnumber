#include <stdio.h>
int Get_max(int x,int y);
int main()
{
	int op1, op2, max;
	printf("please enter the first number:\n ");
	scanf("%d",&op1);
	printf("please enter the second number:\n ");
	scanf("%d",&op2);
	max = Get_max(op1, op2);
	printf("the maximum numberiis %d",max);
}
int Get_max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	
	else
	{return y;}
}