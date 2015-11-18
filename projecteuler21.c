//For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

//Evaluate the sum of all the amicable numbers under 10000.

#include <stdio.h>

int main21(){
	int i, j,sum, sum2, result=0;
	int num, num2;

	for(num = 0 ; num<100000 ; num++){

		sum=0;
		sum2=0;
		for(i = 1 ; i <= num/2 ; i++){
			if(num%i == 0)
				sum = sum+i;
		}
		num2 = sum;
		for(i = 1 ; i <= num2/2 ; i++){
			if(num2%i == 0)
				sum2 = sum2+i;
		}
		if(num == sum2){
			//printf("%d\n", num);
			if(num != sum){
			result = result + num;
			printf("%d, %d\n", num, sum);
			}
		}
	}
	printf("result is %d\n", result);

	return 0;
}