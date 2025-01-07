#include <stdio.h>


struct Scomplex {
    double real;
    double imaginary;
};
struct Scomplex read_complex(char name[]) {
    struct Scomplex c;
    printf("Enter real and imaginary numbers for %s (Example, 3 5): ", name);
    scanf("%lf %lf", &c.real, &c.imaginary);
    return c;
}
struct Scomplex add_complex(struct Scomplex a, struct Scomplex b) {
    struct Scomplex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}
void display_complex(char name[], struct Scomplex a) {
    printf("%s: (%.2lf) + j (%.2lf)\n", name, a.real, a.imaginary);
}

int main(void) {
    struct Scomplex a, b, c;
    a = read_complex("A");
    b = read_complex("B");
    c = add_complex(a, b);
    display_complex("Sum", c);
    return 0;
}
