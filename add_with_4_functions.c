#include<stdio.h>
int input(int n)
{
    	scanf("%d",&n);
    	return n;
}
int addition(int n1, int n2)
{
	int sum=n1+n2;
	return sum;
}
void output(int n1, int n2)
{
	printf("the sum of %d and %d is %d",n1,n2,addition(n1,n2));
}
int main()
{
	int n1,n2;
	printf("enter numero uno:");
	n1=input(n1);
	printf("enter numbero dos:");
	n2=input(n2);
	output(n1,n2);
	return 0;
}
