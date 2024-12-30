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

void calc_square_root(int num){
	double res = sqrt(num);
	printf("%.3f\n",res) ;

}
void main(){
	int x ;
	printf("Enter a number ");
	fflush(stdin);fflush(stdout);

	scanf("%d",&x);
	printf("The square root of %d equals : ", x );
	calc_square_root(x);
	return 0 ;
}

