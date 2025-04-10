#include<stdio.h>
#define PI 3.1415
#define area(r) (PI*(r)*(r))
struct emp {
	int age ;
	char name[50];
	float bs ;
};
int main()
{
	struct emp s ;
	strcpy(s.name,"hady");
}