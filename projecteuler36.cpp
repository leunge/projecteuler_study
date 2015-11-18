//1. 0~ 1000000 까지 palindromic  구하기
//2. 그 수를 2진수로 바꿔서 palindromic 한지 확인하기.
//3. 맞으면 더하기.
//python 
// i for i in range(10,1000000)
#include <stdio.h>


int tentotwo(int tmp){
	int result[100];
	int i, j;
	int num;
	int check=0;
	num = tmp;

	for(i=0; num > 0 ; i++)
	{
		result[i]=num%2;
		num=num/2;
	}

	// 역순으로 출력
	for(j=i-1; j>=0; j--)
	{
		if(result[i-1 - j] != result[j]){
			check = 1;
		}
		//printf("%d",result[j]);
	}
	//printf("\n");
	if(check==0){
		/*for(j=i-1; j>=0; j--)
			printf("%d",result[j]);

		printf("\n");*/
		return 1;
	}else{
		return 0;
	}
	return 0;
}

int main36(){
	int number[20]={0,};
	int numbertmp[100]={0,};
	int size=0;
	int tmp, cycle;
	int tmp2=0;
	int check=0, check2=0;
	int i, j;
	int count=0;
	int sum=0;
	
	
	for(j=0 ; j<1000000 ; j++){
		
		check=0;
		check2=0;
		for(i=0; i < 11 ; i++){
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

		
		for(i = 0 ; i <= size ; i++){
			if(number[size-i] != number[i]){
				check = 1;
			}
		}
		if(check == 0){
			if(tentotwo(j+1)){
				printf("%d\n", j+1);
				sum = sum+ j+1;
			}
			//for(i = 0 ; i <= size ; i++){
			//	printf("%d", number[size-i]);
			//}
			//printf("\n");
		}
	
	}
	printf("sum is %d", sum);
	
	return 0;
}

