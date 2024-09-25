#include <stdio.h>
#include <stdbool.h>
#define lolXD fflush(stdout);fflush(stdin);


int hierarchy (){
    for (int i = 0; i < 10; ++i) {
        for (int j = i; j < 10; ++j) {
            printf("%d ",j);
        }
        printf("\n");
    }
}
void modifyValue(int a) {
    a = 10; // This change will affect the original variable
}
void blabla (){
    static int x = 0 ;
    int y = 0 ;
    x++;
    y++;
    printf("x = %d , y = %d \n",x,y);
}
void make_array (int arr[2][2]){
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("enter the element number (%d,%d) : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}
void show_array(int arr[2][2]){

    printf("the elements of the array\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int calc_average (int arr[],int size ){
    int sum = 0 ;
    for (int i = 0; i < size; ++i) {
        sum+=arr[i];
    }
    return (double)sum/size;
}
void inset_element(int*size , int arr[],int pos,int val){
    for (int i = *size; i > 0 ; --i) {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    (*size)++;
}
int factorial (int x){
    int facto=1;
    for (; x > 0 ; --x) {
        facto*=x;
    }
    return facto;
}
int calc_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {  // Start from 1 since arr[0] is already in min
        if (arr[i] < min) {
            min = arr[i];  // Assign the smaller value to min
        }
    }
    return min;
}
void try_to_modify (int x,char arr[]){
    x++;
    arr[0]--;
}
int facto (int x ){
    int total=1;
    for (;x>0;x--) {
        total*=x;
    }
    return total ;
}
int my_mull(int x , int y ){
    int z ;
    z=x*y;
    return z ;
}
int my_sum(int x , int y ){
    int z ;
    z=x+y;
    return z ;
}
int is_prime(int num ){
    if (num <= 1 ) return false;
    for (int i = 2; i*i < num ; ++i) {
        if (num % i == 0 ) return false ;
    }
    return true;
}
int prime (int x , int y ){
    int temp=0 ;
    if (x > y ){
        temp=x;
        x=y;
        y=temp;
    }
    for (int i = x; i < y; ++i) {
        if (is_prime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
}
int main() {
    int start , end ;
    printf("enter two numbers : \n");
    scanf("%d %d",&start,&end);
    printf("the prime numbers between %d and %d are \n",start,end);
    prime(start,end);
    return 0;
}
