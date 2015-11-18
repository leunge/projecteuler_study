//1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).
//make £2 (200p)
//brueteforce는 그렇다치고 공식으로 풀자!
//	만드는 수	0 1 2 3 4 5 
//	1원 가지		1 1 1 1 1 1
//  2원 가지		    1 1 2 2


#include <stdio.h>
int main31(){
	int target = 200;
	int i,j;
	int coinSizes[] = { 1, 2, 5, 10, 20, 50, 100, 200 };
	unsigned long ways[201]={0,};
	ways[0] = 1;
 
	for (i = 0; i < 8; i++) {
		for (j = coinSizes[i] ; j <= target; j++) {
			ways[j] += ways[j - coinSizes[i]];
			//printf("%d %lu \n", j, ways[j]);
		}
	}
	printf("%lu",ways[target]);
	return 0;
}