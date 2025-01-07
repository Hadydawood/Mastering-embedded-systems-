#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct Sstudent{
    char name[50];
    int roll_number ;
    int marks ;
};
int main(){
    struct Sstudent stu1 ;
    char stu_name[50];
    printf("Enter the students information :\n");

    printf("Enter the name : ");
    scanf("%s",&stu_name);
    strcpy(stu1.name,stu_name);

    printf("\nEnter the roll number : ");
    scanf("%d",&stu1.roll_number);

    printf("\nEnter the marks : ");
    scanf("%d",&stu1.marks);

    printf("displaying info " );

    printf("name : %s\n roll number : %d\n marks : %d",stu1.name,stu1.roll_number,stu1.marks);

}