/*
Let me illustrate with 1/7.  First calculation of the remainder of 1/7 gives us 1.

Second calculation to analyse the remainder on the first decimal place we multiply by 10,  and divide by 7. The remainder of 10/7 is 3.

In the third calculation we get 30/7 which gives us a remainder of 2.

In the fourth calculation we get 20/7 which gives us a remainder of 6.

In the fifth calculation we get 60/7 which gives us a remainder of 4.

In the sixth calculation we get 40/7 which gives us a remainder of 5.

In the seventh calculation we get 50/7 which gives us a remainder of 1.

We already have had a remainder of 1 on the first calculation which means that we continue the calculations we will see the same pattern emerge again


나머지가 다시한번 더 나온다면 무조건 반복이다!!!!!!!
*/

#include <stdio.h>
#include <stdlib.h>

#define lim 1000

int main26(void)
{
  char remainders[lim];
  int i,j, max[2] = {0,0}, cnt = 0, tmp = 1;
  for(i = lim; i > 2 && i > max[1]; i--)
    {
		//초기화
      for(j = 0; j < lim; j++)
        {
          remainders[j] = 0;
        }

      tmp = 1 % i;

      do
        {
          remainders[tmp] = 1;
          tmp *= 10;
          tmp %= i;
          cnt++;
        }while(!remainders[tmp] && tmp!=0);
      if(cnt > max[1])
        {
          max[1] = cnt;
          max[0] = i;
        }
      cnt = 0;
    }
  printf("%d had the longest period with %d digits.\n",max[0],max[1]);
  
}


/*
#include<stdio.h>

int main26(void) {


    int x, y, max=0;
	int i, j, k, l,m, n=1, temp, temp2=0;
	int tmp[2000], count=0;
	int check[2000] = {10,};
	

	for(y = 1 ; y< 1000; y++){
		
		x = 1;
		//y = 81;
		temp2=0;
		n=1;
		temp=0;
		i=j=k=l=0;
		check[0] =10;
		for(m =1 ; m<2000 ; m++)
			check[m] = 0;

		//printf ("%d , %d\n\n", x, y);
		
		for(k=0 ; k<2000 ; k++){
			j = temp2;
			tmp[k] = x/y;
			//save recurring cycle at aray check
			if(check[0] > 9){
				while(j<k){
					if(tmp[k] !=0)
						if(tmp[k] == tmp[j]){
							temp = k;
							temp2=k;
							for(l = 0 ; l < k-j ; l++){
								check[l] = tmp[j+l];
								//printf("%d %d %d\n" ,k, j , check[l]);
							}
							break;
						}
						j = j+1;
				}
			}else{
				if(temp > n){
					if(check[n] == 10 || check[n] == tmp[k] ){
						if(check[n] == 10){
							n = n;
						}else{
							n = n+1;
						}
					}else{
						for(m = 0 ; m<1000 ; m++)
							check[m] = 10;
						n = 1;
					}
				}
			}
			//printf("%d   %d %d %d %d %d\n", x / y, x%y, n, k, check[n],tmp[k] );
			x = x%y*10;		
		}

		i=0;
		count = 0;
		while(check[i] < 10 && check[i] >0){
			//printf("%d\n", check[i]);
			i = i+1;
			count = count+1;
		}
		//printf("%d __ %d\n",y , count);
		if(max < count){
			max = count;
			printf("%d -> %d\n",y , count);
		}
		
	}
	





  return 0;
}
*/