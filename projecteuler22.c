#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main22(){
	FILE *fp;
	int i=0, j=0, k=0, l=0;
	char name[5200][20];
	char tmp[20];
	unsigned long sum=0, sumall=0;
	//char student[5][15] = {"Michael Bolton", "Richard Marx", "Ricky Martin", "Celine Dion", "Cutting Crew"};
	//printf("%c\n",student[i][1]);

	fp = fopen("p022_names.txt","r");
	while(fgets(tmp,2,fp)){
		if(tmp[0] != '\"' ){
			if(tmp[0] == ','){
				name[j][i] = '\0';
				k=0;
				/*
				printf("%d ", j);
				while(name[j][k] != '\n'){
					printf("%c",name[j][k]);
					k=k+1;
				}
				printf("\n");
				*/
				j = j+1;
				i = 0;
			}else{
				name[j][i]=tmp[0] ;
				//printf("%d %d %c %c\n",j, i, name[j][i] ,tmp[0]);
				i = i+1;
			}
		}
	}
	name[j][i] = '\0';
	//printf("%s", name[j]);


	

	for(i=0;i<j;i++)//비교횟수는 데이터갯수-1, 자기 자신과는 비교 하지 않음
    {
        for(k=0;k<j;k++)
        {
			if(strcmp(name[k], name[k+1]) > 0 )
            {
                strcpy(tmp,name[k]);
                strcpy(name[k], name[k+1]);
                strcpy( name[k+1],tmp);
            }

        }
    }

	for(i=0;i<=j;i++){
		printf("%d ", i+1);
		k=0;
		sum=0;
		while(name[i][k] != '\0'){
			sum = sum + name[i][k]-'A'+1;
			//printf("%d ",name[i][k]-'A'+1);
			printf("%c ",name[i][k]);
			k=k+1;
		}
		sumall = ((i+1) * sum) + sumall;
		printf("  sum is %d  %d, %d\n", sum, sum*(i+1), sumall);
	}

	printf(" All sum is %d \n", sumall);
	
   fclose(fp);
   

	return(0);
}

