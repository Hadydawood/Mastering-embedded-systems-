#include <stdio.h>

int main() {
    char arr[100], ch ;
    int i , cnt = 0;
    printf("enter a string : ");
    gets(arr);

    printf("enter the char u want to fund its frequency : ");
    scanf("%c",&ch);
    for(i =0 ; arr[i]!='\0' ; ++i  ){
        if (ch==arr[i])
            cnt++ ;
    }
    printf("frequency of %c is : %d",ch,cnt);
    return 0;
}
