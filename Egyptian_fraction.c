#include<stdio.h>
Struct fraction
{
Int num;
Int den;
};
Typedef struct faction fract;
Struct efraction{
Int n;
Int deno[200];
Fract sum;
};

Typedef struct refraction efract;
Int input()
{
Int n;
printf(‘enter the number of total fractions;”);
scanf(“%d”,&n);
return n;
}
Void input1(efract*a)
printf(‘Enter the number of fraction\n”);
scanf(%d”,&a->deno[i]);
}
void_input_n(efract a[],int n)
{
for(int i=0;i<n;i++)
input1(&a[i]);
}
Int gcd(int a,int b)
{
Int GCD=1;
for(int i=2;i<=a&&i<=b;i++)
{
if(a%i==0;
res.den=1;
Int g;
for(int i=0;i<a->;i++)
{
a->sum.num=(res.num*a->deno[i])+res.den;
a->sum.den=res.den*a->deno[i];
g=gcd(a->sum.num,a->sum.den);
a->sum.den=a->sum.num/g;
a->sum.den=a->sum.den/g;
res=a->sum;
}
}
Void compute_n(efract a[],int n)
{
for(int i=0;i<(a->)-1;i++)
compute(&a[i]);
}
Void output(efract*a)
{
for(int i=0;i<(a->)-1;i++)
printf(“1/%d+”,a->deno[i]);
printf(“1/%d=%d%d\n”,a->deno[(a->)-1],a->sum.num,a->sum.den);
}
Void output_n(efract a[],int n)
{
for(int i=0;i<n;i++)
output_n(&a[i]);
}
Int main()
{
Int n;
Refraction a[100];
n=input();
input_n(a,n);
compute_n(a,n);
return 0;
}
