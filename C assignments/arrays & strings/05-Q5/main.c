#include <stdio.h>
#include <string.h>
int main() {
    int size, i, search, found = 0;
    int arr[size];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to search for: ");
    scanf("%d", &search);

    for (i = 0; i < size; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Value found at index %d.\n", i+1);
    } else {
        printf("Error 404 not found ! .\n");
    }
    return 0;
}

