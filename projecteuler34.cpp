/*python
from math import factorial
l = lambda n: reduce(lambda x, y: int(x) + factorial(int(y)), 
                     [d for d in "0" + str(n)])
print(reduce(lambda x,y: x+y, 
             filter(lambda x: x == l(x), 
                    xrange(3, 100000))))
					*/

#include<stdio.h>

int factor(int a){
	if(a == 1 || a==0)
		return 1;
	else
		return a*factor(a-1);
}

int tempow2(int i){
	int j, res=1;
	for(j=1 ; j<=i ; j++)
		res = 10*res;
	return res;
}

int main34(){
	int i, j;
	int tmp, tmp2;
	int sum=0;
	tmp=0;

	for(i=3 ; i<1000000 ; i++){
		tmp2 = i;
		if(i>=0 && i<10)
			j=0;
		if(i>=10 && i<100)
			j=1;
		if(i >= 100 && i<1000)
			j = 2;
		if(i >= 1000 && i < 10000)
			j=3;
		if(i >= 10000 && i < 100000)
			j=4;
		if(i >= 100000 && i < 1000000)
			j=5;
		tmp=0;
		while(j>=0){
			
			tmp = factor(tmp2/tempow2(j))+tmp;
			tmp2 = tmp2%tempow2(j);
			
			j = j-1;
		}
		//printf("%d %d\n",i,  tmp);
		if(tmp == i){
			sum = sum+tmp;
			printf("%d %d\n",i,  tmp);
		}
	
		
	}
	printf("\n%d\n", sum);
	return 0;
}