#include<stdio.h>
struct Sdistances {
    int feet;
    float inch;
} d1, d2, sum;
int main() {
    // Input for the first distance
    printf("Enter information for 1st distance:\n");
    printf("Enter feet: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &d1.feet);
    printf("Enter inches: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &d1.inch);
    printf("Enter information for 2nd distance:\n");
    printf("Enter feet: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &d2.feet);
    printf("Enter inches: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if (sum.inch >= 12.0) {
        int extraFeet = (int)(sum.inch / 12);
        sum.feet += extraFeet;
        sum.inch -= extraFeet * 12;

        printf("Sum of distances = %d\'-%.1f\"\n", sum.feet, sum.inch);

        return 0;
    }
}
