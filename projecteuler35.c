#include <stdio.h>

int is_prime1(int num){
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
int tempow3(int i){
	int j, res=1;
	if(i==0){
		return 1;
	}
	for(j=1 ; j<=i ; j++)
		res = 10*res;
	return res;
}

int main35(){
	int number[20]={0,};
	int numbertmp[100]={0,};
	int size=0;
	int tmp, cycle;
	int tmp2=0;
	int check=0, check2=0;
	int i, j;
	int count=0;


	
	for(j=0 ; j<1000000 ; j++){
		check=0;
		check2=0;
		for(i=0; i <11 ; i++){
			number[i] = number[i] + 1;
			if(number[i] == 10){
				number[i] = 0;
			}else{
				break;
			}
		}

		for(i=10; i>0; i--){
			if(number[i] != 0){
				size = i;  //size+1 개만큼 바꿈.
				break;
			}
		}
		cycle = size;

		for(i=0; i<size; i++){
			if(number[i]%2 == 0){
				//printf("break %d\n", j+1);
				check2=1;
				break;
			}
		}
		if(check2==0){
			while( cycle >= 0){
				//숫자로 바꿔서 is_prime 실행.
				tmp2=0;
				for(i=size; i>=0; i--)
					tmp2 = tmp2 + number[i]*tempow3(i);
			
				if(!is_prime1(tmp2)){
					//printf("%d\n", tmp2);
					check=1;
				}
			


				tmp = number[0];
				for(i = 0 ; i < size ; i++){
					number[i]= number[i+1];
				}
				number[i] = tmp;
				cycle = cycle-1;
			}
		
			if(!check){
				count = count+1;
				//printf("%d\n", j+1);
			}
		}

		
	}
	printf("\n%d\n",count);
	
	return 0;
}