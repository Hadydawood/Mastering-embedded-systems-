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

int reverse (int x ){
	int res = 0 ;
	while (x < 0 ){
		int LD = x % 10;
		res = res*10+LD;
		x/=10;
	}
	return res ;
}
int main(){
	int x ;
	printf("Enter the number u want to reverse ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int res=reverse(x);
	printf("the original x is %d",x);
	printf("the reversed x is %d",res);
}
