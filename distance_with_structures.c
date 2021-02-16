#include<stdio.h>
#include<math.h>
struct Points
{
	float x,y;
};
float distance_calc(struct Points m, struct Points n)
{
	float res;
	res = sqrt((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y));
	return res;
}
void main()
{
	struct Points m,n;
	printf("enter 1st coordinates: ");
	scanf("%f%f",&m.x,&m.y);
	printf("enter 2nd coordinates: ");
	scanf("%f%f",&n.x,&n.y);
	printf("the distance is :%f\n", distance_calc(m,n));
}
