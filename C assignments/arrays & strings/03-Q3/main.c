#include <stdio.h>

int main() {
    int rows , columns  ;
    printf("enter the matrix size : \n");
    scanf("%d %d",&rows , &columns  );

    int arr[rows][columns];
    int tr[columns][rows];

    printf("enter the elements of the matrix : \n");
    for (int i =0 ; i < rows ; i++){
        for (int j=0 ; j < columns ; j++){
            printf ("enter a%d%d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }

    }for (int i =0 ; i < rows ; i++){
        for (int j=0 ; j < columns ; j++){
          tr[i][j]=arr[j][i];
        }
    }
    printf("Entered matrix : \n");
    for (int i =0 ; i < rows ; i++){
        for (int j=0 ; j < columns ; j++){
            printf ("%d\t",arr[i][j]);
        }
        printf("\n");
    }printf("transpose matrix : \n");
    for (int i =0 ; i < rows ; i++){
        for (int j=0 ; j < columns ; j++){
            printf ("%d\t",tr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
