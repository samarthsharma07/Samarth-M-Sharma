#include<stdio.h>
Int input()
{
	Int a;
	printf(“enter number:”);
	scanf(“%d”, &a);
	Return a;
}
Int main()
{
	Int a,b;
	a=input();
	b=input();
	Int sum=a+b;
	printf(“sum of %d and %d is %d”, a,b,sum);
	Return 0;
}
