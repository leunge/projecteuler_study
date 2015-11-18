//If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

//If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
//NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.

#include <stdio.h>

int main17(){
	int num_read[1001] ={0,3,3,5,4,4,3,5,5,4,3, 6,6,8,8,7,7,9,8,8,6};
	int i;
	int tmp, tmp2, tmp3;
	int sum=0;
	num_read[30] = 6;
	num_read[40] = 5;
	num_read[50] = 5;
	num_read[60] = 5;
	num_read[70] = 7;
	num_read[80] = 6;
	num_read[90] = 6;
	num_read[100] = 10;
	num_read[1000] = 11;

	for(i =21 ; i<1000; i++){
		if( i > 100){
			//add one hundred and
			tmp3 = i/100; //100의자리
			tmp2 = i%100; //10의자리전체
			if(tmp2 != 0){
				num_read[i] = num_read[tmp3] + 7 + 3 + num_read[tmp2];
			}else{
				num_read[i] =num_read[tmp3] + 7;
			}
			//printf("%d + %d = %d    ", tmp3, tmp2, i);
			//printf("%d + 10 + %d = %d\n", num_read[tmp3], num_read[tmp2], num_read[i]);

		}else{	
			tmp = i/10; //10의자리
			tmp2 = i%10; //1의자리
			if(tmp2 != 0){
				num_read[i] = num_read[tmp*10] + num_read[tmp2];
			}
			//printf("%d + %d = %d    ", tmp, tmp2, i);
			//printf("%d + %d = %d\n", num_read[tmp*10], num_read[tmp2], num_read[i]);
			
		}
	}

	for(i = 1 ; i<1001 ; i++){
		sum = num_read[i] + sum;
	}
	printf("\nsum is %d\n", sum);
	return 0;
}


/*
3	one
3	two
5	three
4	four
4	five
3	six
5	seven
5	eight
4	nine
3	ten

6	eleven
6	twelve
8	thir teen
8	four teen
7	fif teen
7	six teen
9	seven teen
8	eigh teen
8	nine teen
6	twenty



6	thirty

5	forty

5	fifty
5	sixty
7	seventy
6	eighty
6	ninety


10	one hundred
one hundred and one

11	one thousand
*/