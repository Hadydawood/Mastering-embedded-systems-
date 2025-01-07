#include <stdio.h>
struct students {
    char name[50];
    int roll_number;
    int marks;
};
struct students read_data(int x) {
    struct students a;
    printf("Enter information for roll number %d:\n", x + 1);
    printf("Name: ");
    scanf("%s", a.name);
    printf("Marks: ");
    scanf("%d", &a.marks);
    a.roll_number = x + 1;
    return a;
}
void display(int x, struct students a) {
    printf("Information for roll number %d:\n", x + 1);
    printf("Name: %s\n", a.name);
    printf("Marks: %d\n", a.marks);
}
int main(void) {
    struct students b[10];
    int students_number = 10, i;
    printf("Enter the details of the students:\n");
    for (i = 0; i < students_number; i++) {
        b[i] = read_data(i);
    }
    printf("\nDisplaying the information of students:\n");
    for (i = 0; i < students_number; i++) {
        display(i, b[i]);
    }
    return 0;
}
