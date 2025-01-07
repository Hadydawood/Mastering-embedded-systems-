#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
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
int addmult(int i , int j){
    int kk ,  ll ;
    kk=i+j;
    ll=i*j;
    return kk , ll ;
}
struct student_id {

};
#pragma pack(1)



unsigned int clearBit(unsigned int num, int bitPosition) {
    unsigned int mask = ~(1 << bitPosition);
    return num & mask;
}
struct Scomplex {
    double m_r; // Real part
    double m_i; // Imaginary part
};

// Function to read a complex number
struct Scomplex read_complex() {
    struct Scomplex c;
    printf("Enter the complex number (e.g., 4+i5 or 4-i5): ");
    char sign;
    scanf("%lf %c%lf", &c.m_r, &sign, &c.m_i);

    if (sign == '-') {
        c.m_i = -c.m_i; // Handle negative imaginary part
    }

    return c;
}

// Function to add two complex numbers
struct Scomplex add_scomplex(struct Scomplex x, struct Scomplex y) {
    struct Scomplex z;
    z.m_r = x.m_r + y.m_r;
    z.m_i = x.m_i + y.m_i;
    return z;
}

// Function to print a complex number
void print_complex(struct Scomplex x) {
    if (x.m_i >= 0) {
        printf("Result: %.2lf + i%.2lf\n", x.m_r, x.m_i);
    } else {
        printf("Result: %.2lf - i%.2lf\n", x.m_r, -x.m_i);
    }
}
#pragma pack(1)
struct Sdata {
    unsigned int data1 ;
    unsigned char data2 ;
    unsigned int data3 ;
    unsigned short data4 ;
};
struct Sdata gdata ;

void dumb_memory (char*ptr ,int size );

int sum (int x ) {
    static int count = 0 ;
    if (x == 0) {
        return 0;
    }
    else {
        count += (x%10) ;
        x=x/10;
        sum(x);
        return count ;
    }
}

int is_prime(int num ){
    if (num <= 1 ) return 0;
    for (int i = 2; i*i < num ; ++i) {
        if (num % i == 0 ) return 0 ;
    }
    return 1;
}
int intervals (int a , int b ) {
    for (int i =a ; i <= b ; ++i) {
        if (is_prime(i)) printf("%d\t ",i);
    }
}
int reverse (int x) {
    int reverse = 0;
    while(x!=0) {
        int last_digit = x%10;
        reverse = reverse * 10 + last_digit ;
        x = x/10;
    }
    return reverse;
}
char* decimal_to_binary(int x) {
    static char binary[100];
    int length = 0;
    if (x == 0) {
        binary[length++] = '0';
    } else {
        while (x > 0) {
            if (x % 2 == 0)
                binary[length++] = '0';
            else
                binary[length++] = '1';
            x /= 2;
        }
    }
    return binary;
}
int freq[100]={0};
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
    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse_array(arr, size);

    return 0;
}
void dumb_memory (char*ptr ,int size ) {
    int i = 0 ;
    for (i = 0; i < size; ++i) {
        printf("%p      %X\n",ptr,(unsigned char)*ptr);
        ptr++;
    }
}


