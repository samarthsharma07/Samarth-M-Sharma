#include<stdio.h>
int* input(int a[], int n)
{
    printf("Enter the digits:");
	for(int i=0;i<n;i++)
	scanf("%d", &a[i]);
	return a;
}
int addition(int a[], int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
		sum=sum+a[i];
	return sum;
}
void output(int a[], int n)
{
	printf("The sum is %d", addition(a,n));
}
int main()
{
	int a[100], n;
	printf("Enter n:");
	scanf("%d", &n);
	input(a,n);
	output(a,n);
	return 0;
}
