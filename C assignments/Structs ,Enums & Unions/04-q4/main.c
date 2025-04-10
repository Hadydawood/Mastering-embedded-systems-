#include <stdio.h>
// struct students {
//     char name[50];
//     int roll_number;
//     int marks;
// };
// struct students read_data(int x) {
//     struct students a;
//     printf("Enter information for roll number %d:\n", x + 1);
//     printf("Name: ");
//     scanf("%s", a.name);
//     printf("Marks: ");
//     scanf("%d", &a.marks);
//     a.roll_number = x + 1;
//     return a;
// }
// void display(int x, struct students a) {
//     printf("Information for roll number %d:\n", x + 1);
//     printf("Name: %s\n", a.name);
//     printf("Marks: %d\n", a.marks);
// }
// int main(void) {
//          int *intPtr;
//         char *charPtr;
//         double *doublePtr;
//         void *voidPtr;
//         void (*funcPtr)(); // Function pointer
//
//         printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));
//         printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));
//         printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));
//         printf("Size of void pointer: %zu bytes\n", sizeof(voidPtr));
//         printf("Size of function pointer: %zu bytes\n", sizeof(funcPtr));
//
//         return 0;
// }
typedef unsigned int Uint32_t;
struct Sperson {
    Uint32_t age ;
};
typedef struct Sperson Sperson_t;
int main() {
    Uint32_t x ;
    Sperson_t y ;

    return 0;
}
