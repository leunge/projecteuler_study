/*
The following iterative sequence is defined for the set of positive integers:

n ¡æ n/2 (n is even)
n ¡æ 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 ¡æ 40 ¡æ 20 ¡æ 10 ¡æ 5 ¡æ 16 ¡æ 8 ¡æ 4 ¡æ 2 ¡æ 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include<stdio.h>

int main14(){
	unsigned long long n, m;
	int count=0, result=0;
	for(m = 0 ; m < 1000000 ; m++){
		n = m;
		while(n > 1){
			if(n%2==0){
				n = n/2;
				//printf("%d\n", n);
			}else{
				n = 3 * n + 1;
				//printf("%d\n", n);
			}
			count = count+1;
		}
		if(result < count){
			result = count;
			printf("count is %d the number is %llu \n", count, m);
			
		}
		count = 0;
		
	}
	return 0;
}