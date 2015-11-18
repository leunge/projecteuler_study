#include <stdio.h>


int factor(int num){
	if(num > 1)
		return num*factor(num-1);
	else
		return 1;
}

int pop(int arr[], int num){
	int i, tmp, count=0;

	tmp = arr[num];
	for(i=num ; i< 9 ; i++){
		arr[i] = arr[i+1];
		//printf("%d %d %d\n", arr[i], arr[i+1], i);
	}
	arr[i] = 0;
	return tmp;
}

int main24(){
	int num=9;
	int remain=1000000-1;
	int i, j, tmp;
	int max=100;
	int result[100];
	int	arr[]={0,1,2,3,4,5,6,7,8,9};

	
	//자리 숫자가 들어온다. ex9
	//printf("enter number");
	//scanf("%d", &num);

	//원하는 위치 찾기.
	//printf("enter check number");
	//scanf("%d", &check);

	for (i = 1; i < 10; i++) {
		j = remain / factor(10 - i);
		remain = remain % factor(10 - i);
		printf("%d\n", pop(arr, j));
		if (remain == 0) {
			break;
		}
	}
	printf("%d\n", pop(arr, 0));

 
	return 0;
}





/*
int find_num(int num){
	int i;

	for(i=0 ; i<= 10 ; i++){
		if(factor(i) > num){
			return i;
		}
	}
}

int find_num2(int arr[], int max, int check){
	int i;
	for(i=1 ; i<= max ; i++){
		if(check < factor(max-1)*i){
			printf("%d %d %d %d \n",i,  max, factor(max-1), check);
			max =  check - factor(max-1)*(i-1);
			
			printf("%d %d\n", i, pop(arr, i-1));
			return max;
		}
	}
}
*/

	/*
	main

	max = find_num(check);

	if(max==100){
		printf("not in range");
		return 0;
	}else{
		check = find_num2(arr, max, check)-1;
		max = find_num(check);

		//printf("%d %d\n", max, check);
		for(j=0 ; j<10 ; j++){
				printf("%d  ", arr[j]);
			}
			printf("\n");
		for(i=0 ; i<10 ; i++){
			check = find_num2(arr,max, check);
			max = find_num(check);
			//printf("%d %d\n", max, check);
			for(j=0 ; j<10 ; j++){
				printf("%d  ", arr[j]);
			}
			printf("\n");
		}




		
		
	}

	*/