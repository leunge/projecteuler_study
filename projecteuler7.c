//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10001st prime number?

#include<stdio.h>

int main7(){
	int result=0;
	int i, j=2;
	int num=1;

	while(1){
		for(i=2 ; i < j ; i++){
			if(j%i != 0){
				if(i == j-1){
					num = num++;
					if(num == 10001){
						printf(" %d th prime is %d", num, j);
						return 0;
					}
				}
			}else{
				break;
			}
		}	
		j = j+1;
	}
	

	
	return 0;
}