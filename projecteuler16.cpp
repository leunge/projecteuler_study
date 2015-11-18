//2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

//What is the sum of the digits of the number 21000?


#include <stdio.h>

int main(){
	int i;
	unsigned long long num=2;
	for(i=1 ; i<100 ; i++){
		num = num * 2;
	}
	printf("%d", num);
	return 0;
}