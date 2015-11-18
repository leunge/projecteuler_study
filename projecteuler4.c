//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the number 600851475143 ?

#include<stdio.h>

int main4(){
	int i=2, j, sum=0, check=1;
	for( i=2 ; i < 600851475143 ; i++){
		if(600851475143%i == 0){
			for(j=2 ; j<i ; j++){
				if(i%j == 0){
					check=1;
					break;
				}else{
					check=0;
				}
			}
			if(check==0){
				sum = i;
				printf("%d prime\n", sum);
				check=1;
			}else{
				printf("%d noprime\n", i);
			}
		}
	}
	printf("\n answer is %d ", sum);
	
	return 0;
}