#include <stdio.h>
#include <string.h>
int main() {
    int arr[30] , i , num , element , location ;
    printf("Enter the number of elements : ");
    scanf ("%d", &num );
    for (i = 0 ; i < num ; i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to be inserted : \n");
    scanf("%d",&element);

    printf("enter the location : \n");
    scanf("%d",&location);

    for (i = num ; i >=location ; --i){
        arr[i]=arr[i-1];
    }
    num++;
    arr[location-1]=element;

    for (i =0 ; i < num ; i++ ){
        printf("element number %d : %d\n",i+1, arr[i]);
    }
    return 0;
}
