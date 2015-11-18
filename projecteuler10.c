#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define  double __int64

int is_prime(int a)
{
    int i;
    for(i = 2 ; i <= sqrt(a) ; i++)
    {
        if(a%i==0) return 0;
        if(i>2)i++;             //To skip even numbers after testing 2
    }
    if(a != 1) return 1;
    else return 0;
}

int main10()
{
    int i;
    double sum = 0;
    for(i = 1; i < 2000000; i++) if(is_prime(i)) sum+=i;

    printf("Sum = %I64d",sum);
}

//이건 남에꺼 사용한거 sqrt 는 제곱근을 구하는 함수로 prime number가 제곱근까지 나눠지지 않으면 그뒤로도 안나눠진다는것을 이용.(빠..빠르다..)