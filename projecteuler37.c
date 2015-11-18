//The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly we can work from right to left: 3797, 379, 37, and 3.
//Find the sum of the only eleven primes that are both truncatable from left to right and right to left.
//NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.


#include<stdio.h>

int is_prime2(int num){
	int i;

	for(i=2 ; i < num/2+1 ; i++){
		if(num % i == 0)
			break;
	}
	if(i == num/2+1)
		return 1;
	else 
		return 0;
}

int tempow4(int i){
	int j, res=1;
	for(j=1 ; j<=i ; j++)
		res = 10*res;
	return res;
}

int main37(){
	int number[20]={0,};
	int size=0;
	int i, j, k;
	int tmp=0, tmp2;
	int check=0;
	int sum = 0;

	for(j=0 ; j<739400 ; j++){
		for(i=0; i < 11 ; i++){
			number[i] = number[i] + 1;
			if(number[i] == 10){
				number[i] = 0;
			}else{
				break;
			}
		}
		for(i=10; i>=0; i--){
			if(number[i] != 0){
				size = i;  //size+1 °³¸¸Å­ ¹Ù²Þ.
				break;
			}
		}
		check=0;
		tmp2 = size;
		for(; size >= 0 ; size--){
			tmp=0;
			for(i = 0 ; i <= size ; i++){
				tmp = number[size-i] + tmp*10;
			}
			if(!is_prime2(tmp))
				check=1;
				
			tmp=0;
			for(i = tmp2 ; i >= tmp2-size  ; i--){
				tmp = number[i] + tmp*10;
			}
			if(!is_prime2(tmp))
				check=1;
		}
		if(check==0 && j > 10){
			printf(" %d\n",j+1);
			sum = sum+j+1;
		}
	}
	printf("%d", sum);

	return 0;
}