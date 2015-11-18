/*#include< stdio.h>

int power(int i, int j){
	int tmp, tmp2, result;
	tmp2 = i;
	result = 1;
	for(tmp = 1 ; tmp <= j; tmp++){
		result = tmp2 * result;
	}
	return result;
}
int main29(){
	int k;
	int check[10000]={0,};
	int i, j;
	int num=0;
	

	for(i=2 ; i<=5 ; i++){
		for(j=2 ; j<=5 ; j++){
			check[power(i,j)] = 1;
			printf("%d\n",power(i,j));
		}
	}

	for(k=0 ; k<10001 ; k++){
		if(check[k] == 1){
			num = num+1;
		}
	}
	printf("%d", num);
	return 0;
}*/