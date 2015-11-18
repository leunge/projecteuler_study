/*
python

constant = ''.join([(str(i)) for i in range(0,1000000)])
print reduce(lambda x, y: x*y, [int(constant[10**i]) for i in xrange(0,7)])


stra="".join([str(i) for i in range(1,1000000)])
int(stra[1-1])*int(stra[10-1])*int(stra[100-1])*int(stra[1000-1])*int(stra[10000-1])*int(stra[100000-1])*int(stra[1000000-1])

*/

#include < stdio.h>
#include <stdlib.h>
#include <string.h>


int tenten(int num){
	int i;
	int result=1;
	if(num ==0)
		return 1;
	for(i = 0 ; i < num ; i++){
		result = result*10;
	}
	return result;
}
int main40()
{
	int str[20];

	int i, j=1, k, l;
	int tmp=0, tmp_sum=0;
	int target;
	int before = 0;
	int temp1, temp2, temp3, temp4;
	int target1[] = {10,100, 1000, 10000, 100000,1000000};
	int result=1 ; 
	for(l = 0 ; l < 6 ; l++){
		target = target1[l];
		before = 0;
		tmp_sum=0;
		j=1;
		for(i = 1 ; i< 9 ; i++){
			before = tmp_sum;
			if(j == 1){
				tmp = i * (tenten(j));
			}else{
				tmp = i * (tenten(j) - tenten(j-1));
			}
			tmp_sum = tmp + tmp_sum;
			if(target < tmp_sum){
				temp3 = target - before;
				temp1 = temp3/i;
				temp2 = temp3%i;
				//printf("%d %d %d %d %d %d \n", j, temp1, temp2, target, before, tmp_sum);
				if(i > 1){
					temp4 = tenten(j-1)+temp1;
					for(k=j ; k >0 ; k--){
						str[j- k] = temp4 / tenten(k-1);
						temp4 = temp4 % tenten(k-1);
					}
					result = result * str[temp2];
					printf("%d  %d \n",target, str[temp2]);
				}else{
					//printf("%d %d %d \n", j, temp1, temp2);
				}
				break;
			}
			j += 1;
		}
	}
	printf("\n%d\n", result);
	return 0;
}