#include<stdio.h>
float input(float a)
{
	scanf("%f",&a);
	return a;
}
float volume(float h, float d, float b)
{
	float vol=((h*d*b)+(d/b))/3;
	return vol;
}
float output(float h, float d, float b)
{
	printf("The volume of tromobloid is : %f\n", volume(h,d,b));
}
int main()
{
	float h,d,b;
	printf("enter h :");
	h=input(h);
	printf("enter d :");
	d=input(d);
	printf("enter b :");
	b=input(b);
	output(h,d,b);
	return 0;
}
