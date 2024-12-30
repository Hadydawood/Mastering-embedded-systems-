/*
 * Main.c
 *
 *  Created on: Dec 30, 2024
 *      Author: G3
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
int main(){
	int num1 , num2  ;
	printf("Enter the start number :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);

	printf("Enter the end number :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);
	intervals(num1,num2);
	return 0 ;
}

