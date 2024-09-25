#include <stdio.h>
int power(int base, int pow) {
    if (pow == 0) {
        return 1;
    }
    return base * power(base, pow - 1);
}
int main() {
    int num, pow;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pow);

    printf("%d ^ %d equals %d\n", num, pow, power(num, pow));

    return 0;
}
