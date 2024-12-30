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

int recursive_sum (int x ){
	if (x ==0) return 0 ;
	else {
		return x+recursive_sum(x-1);
	}
}
int main(){
	int res = recursive_sum(100);
	printf("The sum of numbers between 1 and 100 equals : %d",res);
	return 0 ;
}


