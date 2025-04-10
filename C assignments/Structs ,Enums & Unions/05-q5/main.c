#include<stdio.h>
<<<<<<< HEAD
=======

>>>>>>> e5d0e4806091e471ab9ab1b0afe531e55bfe72fa
#define PI 3.1415
#define area(r) (PI*(r)*(r))
struct emp {
	int age ;
	char name[50];
	float bs ;
};
int main()
{
<<<<<<< HEAD
	struct emp s ;
	strcpy(s.name,"hady");
}
=======
	int radius;
	float area;
	printf("Enter area radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&radius);
	area = area(radius);
	printf("area = % .2f",area);
}
>>>>>>> e5d0e4806091e471ab9ab1b0afe531e55bfe72fa
