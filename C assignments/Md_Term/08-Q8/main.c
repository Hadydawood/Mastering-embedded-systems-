/*
 * main.c
 *
 *  Created on: Dec 30, 2024
 *      Author: G3
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverse_array(int arr[], int size) {
    printf("Reversed array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int size ;
    printf("Enter the size of the array: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&size);
    int arr[size];
    for (int i = 0 ; i < size ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse_array(arr, size);

    return 0;
}
