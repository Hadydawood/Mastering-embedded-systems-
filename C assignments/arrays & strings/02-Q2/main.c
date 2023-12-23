#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for the number of elements.\n");
        return 1;
    }
    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }

    float average = (float)sum / n;
    printf("The average of the entered numbers is: %.2f\n", average);
    return 0;
}
