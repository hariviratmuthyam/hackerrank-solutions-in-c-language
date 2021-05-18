#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,b;
float c,d;
scanf("%d %d",&a,&b);
scanf("%f %f",&c,&d);
int e=a+b,g=a-b;
float f=c+d,h=c-d;
printf("%d %d\n",e ,g);
printf("%.1f %.1f",f ,h);
    return 0;
}
