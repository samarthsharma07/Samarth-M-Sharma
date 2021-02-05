#include<stdio.h>
Int main()
{
Int h,b,d;
printf(“Enter h, b, d:”);
scanf(“%d%d%d”,&h, &b, &d);
Float vol = ((h*d*b) + (d/b))/3;
printf(“ The volume of tromboloid is %f\n”, vol);
return 0;
}
