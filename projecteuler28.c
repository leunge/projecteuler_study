#include<stdio.h>

int main28(){
	int i=2;
	int k, l;
	int sum=1;
	int value = 1;

	printf("0 : 1\n");
	for(k = 1 ; k < 1001 ; k = k+2){
		printf("%d : ",k);
		for(l = 1 ; l < 5 ; l++){
			value = value + i;
			printf(" %d ", value);
			sum = sum+ value;
		}
		i = i+2;
		printf(" => %d \n", sum);
	}
	return 0;
}