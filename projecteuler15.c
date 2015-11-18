/*
Starting in the top left corner of a 2¡¿2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.


How many such routes are there through a 20¡¿20 grid?
*/

#include <stdio.h>
int main15(){
	int map_size=20;
	unsigned long long  way=1;
	int i, j;
	int fac[21] ={0,};

	for(i= (map_size+1) ; i <= 2*map_size ; i++){
		way = way * i;
		printf("%d -> %llu\n",i, way);
		for(j =1 ; j < map_size+1 ; j++){
			if(way%j ==0 && fac[j] == 0){
				way = way/j;
				fac[j] = 1;
				printf("devided %d way is %llu\n",j, way);
			}
		}

	}
	printf("%llu\n", way);
	
	
	return 0;
}