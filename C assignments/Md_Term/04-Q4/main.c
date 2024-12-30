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
int main(){
	int decimal ;
	printf("Enter the decimal number ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&decimal);

	int ones_count = 0 ;
	if (decimal < 0 ){
		printf("please enter a non-negative number \n");
	}else {
		char*binary = decimal_to_binary(decimal);
		for (int i =0 ; binary[i]!='\0';i++){
			if (binary[i]=='1'){
				ones_count+=1;
			}
		}

	}
	printf("the numbers of 1s in the binary representation of %d is %d",decimal , ones_count);
	return 0 ;
}
