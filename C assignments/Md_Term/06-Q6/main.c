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


int freq[100]={0};
int main(){
	int size ;
	scanf("%d",&size);
	int arr[size];
	fflush(stdin);fflush(stdout);
	for(int i =0 ; i < 100 ; i ++){
		freq[i]=0;
	}
	for(int i = 0 ; i < size ; i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0 ; i < size ; i++){
			freq[arr[i]]++;
		}
	for(int i = 0 ; i < size ; i++){
			if(freq[i]>0 && freq[i]==1){
				printf("Element %d : %d",i,freq[i]);

			}
		}
	return 0 ;

}
