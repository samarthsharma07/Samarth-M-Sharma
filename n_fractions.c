#include<stdio.h>
Struct fraction
{
Int num;
Int deno;
};
Typedef struct fraction fract;
Fract input()
{
Fract f;
printf(“Enter the numerator:”);
scanf(“%d”,&f,deno);
return f;
}
Void input_n(Fract f1[],int*n)
{
printf(“Enter the number of fractions:\n”);
scanf(“%d”,n);
printf(“Enter the values of the fraction\n”);
for(int i=0;i<*n;i++)
{
f1[i]=input();
}
}
Fract sum(Fract f1, Fract f2)
{
Fract f3;
f3.num=(f1.num*f2.deno)+(f2.num*f1.deno);
f3.deno=f1.deno*f2.deno;
Int g=gcd(f3.num;f3.deno);
f3.num=f3.num/g;
f3.deno=f3.deno/;
return  f3;
}
Int i,gcd=1,temp;
if(a<b)
{
temp=a;
a=b;
if(a%b==0)
{
return i;
}
Retun gcd;
}
Void output(Fract f1[],Fract f3, int n)
{
printf(“the sum of”);
for(int i=0;i<n;i++)
{
if(i<n-1)
printf(“%d%d+”,f1[i].num,fi[i].deno);
else 
printf(“is%d%d”,f3.num,f3.deno);
}
Int main()
{
Fract f1[100],f3;
int n;
input_n(f1,&n);
f3=sum_n(f1,n);
output(f1,f3,n);
Return 0:
}
