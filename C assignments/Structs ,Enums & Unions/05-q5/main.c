#include<stdio.h>
//C Program to find area of a circle, passing arguments to macros
#define PI 3.1415
#define area(r) (PI*(r)*(r))
int main()
{
	int radius;
	float area;
	printf("Enter area radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&radius);
	area = area(radius);
	printf("area = % .2f",area);
}