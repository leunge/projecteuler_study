#include <stdio.h>

int pow5(int num){
	return num*num*num*num*num;
}
int main30(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	int temp;
	int temp2;
	int sum=0;

	for(a = 0 ; a<10 ; a++)
		for(b=0 ; b<10 ; b++)
			for(c=0 ; c<10 ; c++)
				for(d=0 ; d<10 ; d++)
					for(e=0 ; e<10 ; e++)
						for(f=0 ; f<10 ; f++){
					temp = pow5(a) + pow5(b) + pow5(c) + pow5(d)+pow5(e) + pow5(f);
					temp2 = a*100000 + b*10000 + c*1000 + 100*d +10*e +f;
					if(temp2 == temp){
						sum = sum + temp;
						printf("%d\n",temp);
					}
				}

	printf("sum is %d\n", sum-1);
	return 0;
}