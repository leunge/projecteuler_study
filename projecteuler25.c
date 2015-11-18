#include<stdio.h>


int puls(int a[], int b[]){
	int i, check=1000;
	for(i = 0 ; i<1010 ; i++){
		/*
		if(check==1){
			printf("\n");
			return 0;
		}*/
			if( a[i] + b[i] < 10)
				a[i] = a[i] + b[i];
			else{
				a[i] = a[i] + b[i]-10;
				a[i+1] = a[i+1] + 1;
			}
			/*
			printf("%d", a[i]);
		if(a[i+1] == 0 && a[i+2] == 0 && a[i+3] == 0 && a[i+4] == 0){
			check = 1;
		}*/
	}
	return 0;
}
int main25(){
	int a[1010] ={0,};
	int b[1010]= {0,};
	int i, check=1000-1;
	int index=2;

	a[0] = b[0] = 1;

	//printf("1 1\n2 1\n");
	while(a[check] == 0 && b[check] == 0){
		//printf("%d ", index);
		index = index+1;
		if(index%2==0)
			puls(b, a);
		else
			puls(a, b);

		
	}
	/*
	for(i = 1002 ; i>=0 ; i--){
		printf("%d", a[i]);
	}
	printf("\n");
	for(i = 1002 ; i>=0 ; i--){
		printf("%d", b[i]);
	}*/
	printf("\n%d\n", index);
	return 0;
}