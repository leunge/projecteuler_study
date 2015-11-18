#include <stdio.h>

int main39(){
	int a, b, c;
	int p;
	int tmp;
	int i;
	int num=0, max=0, max_num=0;

	//p = 120;
	for(p = 100 ; p<= 1000 ; p++){
		for(c=2 ; c<p/2 ; c++){
			i = p - c;
			for(a = 1 ; a < i/2+1 ; a++){
				b = i - a;
				tmp = a*a + b*b;
				if( tmp == c*c){
					//printf("%d %d %d => %d\n", a , b ,c , p);
					num = num+1;
				}
			}
		}
		if( num > max){
			max = num;
			max_num = p;
		}
		num = 0;
	}
	printf("%d %d\n", max, max_num);

	return 0;
}