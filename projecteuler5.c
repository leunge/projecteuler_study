//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include<stdio.h>

int main5(){
	int num=2;
	int i, result=0;
	while(1){
		for(i=1 ; i <21 ; i++){
			if(num%i == 0){
				if(i == 20){
					result= num;
					printf("\n answer is %d ", result);
					return 0;
				}
			}else{
				//printf("fail %d \n", num);
				break;
			}
		}	
		num = num+1;
	}
	
	return 0;
}