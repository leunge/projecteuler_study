#include <stdio.h>
#include <stdlib.h>

#define lim 1000

int main(void)
{
  char remainders[lim];
  int i,j, max[2] = {0,0}, cnt = 0, tmp = 1;
  for(i = lim; i > 2 && i > max[1]; i--)
    {
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