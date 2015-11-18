//The sum of the squares of the first ten natural numbers is, 1^2 + 2^2 + ... + 10^2 = 385

//The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10)^2 = 55^2 = 3025

//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


#include<stdio.h>

int main6(){
	int sum=0;
	int square=0, i;
	
	for(i = 1 ; i < 101; i++){
		sum = sum + i*i;
		square = square + i;
	}

	printf("sum of squarre is %d and square of sum is %d and the diff is %d ", sum, square*square, square*square-sum);
	
	return 0;
}