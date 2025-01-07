#include<stdio.h>

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
