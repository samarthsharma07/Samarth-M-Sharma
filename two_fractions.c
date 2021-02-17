#include<stdio.h>
struct fractions
{
	int num, den;
};
typedef struct fractions fractions;
struct fractions input(struct fractions a)
{
	scanf("%d%d", &a.num, &a.den);
	return a;
}
int gcd(int a, int b)
{
	int gcd;
	for(int i=1; i<=a && i<=b; i++)
	if(a%i==0 && b%i==0)
	gcd = i;
	return gcd;
}
struct fractions addition(fractions a, fractions b)
{
    struct fractions c;
	int num = ((a.num*b.den)+(b.num*a.den));
	int den = (a.den*b.den);
	int com = gcd(num, den);
	c.num = num/com;
	c.den = den/com;
	return c;
}
void output(struct fractions c)
{
	printf("The sum is %d/%d\n", c.num, c.den);
}
int main()
{
	struct fractions a,b;
	printf("Enter first fraction:");
	a=input(a);
	printf("Enter second fraction:");
	b=input(b);
	output(addition(a,b));
	return 0;
}
