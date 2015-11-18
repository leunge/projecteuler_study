//2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

//What is the sum of the digits of the number 21000?
//i found it in python => sum(int(i) for i in str(2**1000))

#include <stdio.h>

int main16(){
	int i, tmp, result=0;
	unsigned long long num=2;
	for(i=1 ; i<20 ; i++){
		num = num * 2;
	}
	while(num>1){
		tmp = num%10;
		num = num/10;
		result = tmp + result;
	}
	printf("%d", result);
	return 0;
}