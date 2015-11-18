#include <stdio.h>

int popa(int arr[], int num){
	int i, tmp, count=0;

	tmp = arr[num];
	for(i=num ; i< 9 ; i++){
		arr[i] = arr[i+1];
		//printf("%d %d %d\n", arr[i], arr[i+1], i);
	}
	arr[i] = 0;
	return tmp;
}

void init(int arr[]){
	int i;
	for(i=0; i<9 ; i++){
		arr[i] = i+1;
	}
}

int tempow(int i){
	int j, res=1;
	for(j=1 ; j<=i ; j++)
		res = 10*res;
	return res;
}

int main32(){
	int	resource[11];
	int temp[11];
	int i, j, k, l, m, z,y,x;
	int tmp, tmp1, tmp2, tmp3;
	int sum[20]={0,};
	int num=0;
	int type;
	int realsum=0;
	int tmpsum=0;
	init(resource);

	for(type=1 ; type<=2 ; type++){
		for(i=0; i<9 ; i++){
			for(j=0;j<8;j++){
				for(k=0;k<7;k++){
					for(l=0;l<6;l++){
						for(m=0;m<5;m++){
							temp[0] = popa(resource, i);
							temp[1] = popa(resource, j);
							temp[2] = popa(resource, k);
							temp[3] = popa(resource, l);
							temp[4] = popa(resource, m);

							if(type==1){
								tmp1 = temp[0];
								tmp2 = temp[1]*1000 + temp[2]*100 + temp[3]*10 + temp[4];
							}else{
								tmp1 = temp[0]*10 + temp[1];
								tmp2 = temp[2]*100 + temp[3]*10 + temp[4];
							}


							tmp = tmp1*tmp2;
							tmp3 = tmp;

							if(tmp > 1000 && tmp < 10000){
								y = 5;
								x = 3;
								while(y<9){
									for(z=0 ; z<y ; z++){
										temp[y] = tmp/tempow(x);
										if(temp[y] == temp[z] || temp[z]==0)
											break;
									}
								
									if(z==y ){
										//printf("%d x %d %d  %d %d %d %d %d\n",tmp1, tmp2,  y, z,temp[y], temp[z],tmp, tempow(x));
										tmp = tmp%tempow(x);
										x=x-1;
										y = y+1;
									}else{
										y=10;
									}

									if(x==-1){
										if(temp[z]!=0){
											sum[num++] = tmp3;
											printf("%d x %d = %d  \n", tmp1, tmp2, tmp3);
										}
									}
								}

							}
							init(resource);
						}
					}
				}
			}
		}
	}
	for(i=0 ; i<20 ; i++){
		for(j=0 ; j<20 ; j++){
			if(sum[j] != 0){
				if(i!=j && sum[i] == sum[j]){
					tmpsum = tmpsum+sum[j];
					//printf("%d\n", sum[j]);
					break;
				}
			}
		}
		if(j == 20){
			//printf("%d\n",sum[i]);
			realsum = realsum+sum[i];
		}
			
	}
	realsum = realsum + tmpsum/2;
	printf("%d\n",realsum);
	return 0;
}