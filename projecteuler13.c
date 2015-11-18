//Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.

#include <stdio.h>
#include <stdlib.h>

int main13(){
	FILE *fp;
	int c;
	unsigned long long sample[100]={0,};
	int i=0, j=0, n=0;
	unsigned long long sum=0;

	fp = fopen("file.txt","r");
	while(1)
   {
      c = fgetc(fp);
      if( feof(fp) )
      { 
         break ;
      }
	  if(c=='\n'){
		  i = i+1;
		  n=0;
		  //printf("\n");
	  }
	  else{
		  n = n+1;
		  if(n < 15){
		  sample[i] = (c-'0') + sample[i]*10;
		  //printf("%d", c-'0');
		  //printf("%llu\n", sample[i]);
		  }
	  }
      //printf("%c", c);
   }
   fclose(fp);
   
   for(i=0 ; i<100 ; i++){
	   sum = sum + sample[i];
	   printf("%llu\n", sample[i]);
   }
   printf("the sum is %llu", sum);

	return(0);
}