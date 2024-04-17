#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned long int fib(unsigned long int n)
{
    unsigned long int re;
    if(n==0){re=0;}
        else if(n==1){re=1;}
            else if(n>=2)
            {
                re=fib(n-1)+fib(n-2);
            }
    return re;
}

int main()
{
    unsigned long int n,anw;
            printf("calculate fibonacci number. n=");
        scanf("%lu",&n);
    anw=fib(fib(n));
            printf("fib(fib(%lu))=%lu\n",n,anw);
    return 0;
}
