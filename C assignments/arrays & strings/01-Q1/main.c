#include <stdio.h>

//void addMatrices(int rows, int cols , int arr1[rows][cols],int arr2[rows][cols],int res[rows][cols]){
//    for ( int i =0 ; i < rows ; i++){
//        for (int j =0 ; j < cols ; j++){
//            res[rows][cols]=arr1[rows][cols]+arr2[rows][cols];
//        }
//    }
//}
//void nput_arr(int rows , int cols , int arr[rows][cols]){
//    for ( int i =0 ; i < rows ; i++){
//        for (int j =0 ; j < cols ; j++){
//            printf ( "the element %d %d ",i+1,j+1);
//            scanf("%d",arr[i][j]);
//        }
//    }
//}

int main() {
    float arr1[2][2];
    float arr2[2][2];
    float sum[2][2];
    int i , j;
    printf("enter the elemnts of 1st matrix : \n");
    for (i=0 ; i< 2 ; i++){
        for (j =0 ; j < 2 ; j++){
            printf ("enter a%d%d : \n",i+1,j+1);
            scanf ("%f",&arr1[i][j]);
        }
    }
    printf("enter the elemnts of 2nd matrix : \n");
    for (i=0 ; i< 2 ; i++){
        for (j =0 ; j < 2 ; j++){
            printf ("enter a%d%d : \n",i+1,j+1);
            scanf ("%f",&arr2[i][j]);
        }
    }
    for (i=0 ; i< 2 ; i++){
        for (j =0 ; j < 2 ; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf ("the sum matrix : \n");
    for (i=0 ; i< 2 ; i++){
        for (j =0 ; j < 2 ; j++){
            printf("%f\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
