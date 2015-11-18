/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/


#include<stdio.h>

int main9(){
	int i, j, k;

	for(i = 2 ; i<500; i++){
		for(j = 1 ; j< i ; j++){
			k = 1000-(i+j);
			if( i*i + j*j == k*k){
				printf(" %d ^2 + %d ^2 = %d ^2\n", i, j, k);
				printf(" %d + %d = %d\n", i*i, j*j, k*k);
				printf("abc is %d", i*j*k);
			}
		}
	}

	
	return 0;
}