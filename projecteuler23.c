#include<stdio.h>

int main23(){
	int num = 12;
	unsigned long long sum=0;
	int i, j=0, k=0, tmp, l, check=0;
	int abun[8000];
	int suma[28123]={0,};
	for(num = 12 ; num < 28123 ; num++){
		for(i = 1 ; i < num/2+1 ; i++){
			if(num%i == 0)
				sum = sum+i;
		}
		if(sum > num)
			abun[j++]=num;
		sum=0;
	}
	/*
	for(i=0 ; i< 6965 ; i++){
		printf("%d\n", abun[i]);
	}*/
	//printf("%d", j);
	for(i=0 ; i< 6965 ; i++){
		for(j=0 ; j<6965 ; j++){
			//두개 합 가능한 경우를 구해서 배열 suma에 넣는다.
			tmp = abun[i] + abun[j];
			//printf("%d \n", tmp);
			if(28123 > tmp){
					suma[tmp] = 1;
					//printf("%d %d + %d = %d\n", k,abun[i],abun[j],  tmp);
			}
		}
	}
	for(i=0 ; i<28123 ; i++){
		if(suma[i]==0){	
			sum = i + sum;
			//printf("%d %d\n", tmp, k);
		}
	}
	printf("\n\n%llu\n", sum);
	return 0;
}