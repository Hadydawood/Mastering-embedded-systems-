#include <stdio.h>
#include <string.h>

int main() {
    char arr[100] , temp ;
    int i , j ;
    printf(" enter the string : ");
    gets(arr);

    int length = (strlen(arr))-1;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("the reversed string : %s\n",&arr);

    return 0;
}
