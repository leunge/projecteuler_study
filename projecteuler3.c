//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 �� 99.

//Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main3(){
	int i, j, l, tmpi, answer=0;
	char tmpc[10], palindomic[10];
	//i, j 10~100
	for(i=100 ; i<1000 ; i++){
		for(j=100 ; j<1000 ; j++){
			//������Ű�鼭 ���Ѵ�.
			tmpi = i*j;
			itoa(tmpi,tmpc,10);
			//�Ųٷ� �д´� 
			for(l=0 ; l< strlen(tmpc) ; l++){
				palindomic[strlen(tmpc)-l-1] = tmpc[l];
			}
			palindomic[strlen(tmpc)] = tmpc[strlen(tmpc)];
			//������ ��� ���.
			if(!strcmp(palindomic, tmpc)){
				if(answer < tmpi){
					answer = tmpi;
					printf("result %d * %d = %s\n", i , j , tmpc);
				}
			}
		}
	}
	
	return 0;
}