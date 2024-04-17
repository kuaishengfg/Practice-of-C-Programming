#include<stdio.h>  
#include<stdlib.h>  
  
unsigned long int fib(unsigned long int n)  
{  
    if (n <= 1) {  
        return n; // 斐波那契数列的前两个数分别是 0 和 1  
    }  
      
    unsigned long int fib_n_minus_1 = 0; // 用于保存前一个斐波那契数  
    unsigned long int fib_n_minus_2 = 1; // 用于保存前两个斐波那契数  
    unsigned long int fib_n = 0; // 用于保存当前斐波那契数  
      
    for (unsigned long int i = 2; i <= n; ++i) {  
        fib_n = fib_n_minus_1 + fib_n_minus_2; // 当前斐波那契数是前两个斐波那契数的和  
        fib_n_minus_2 = fib_n_minus_1; // 将前一个斐波那契数移到前两个斐波那契数的位置  
        fib_n_minus_1 = fib_n; // 将当前斐波那契数移到前一个斐波那契数的位置  
    }  
      
    return fib_n; // 返回第 n 个斐波那契数  
}  
  
int main()  
{  
    unsigned long int n, fib_of_n;  
    printf("calculate fibonacci number. n=");  
    scanf("%lu", &n);  
      
    // 只计算一次 fib(n)，然后计算这个值的斐波那契数  
    fib_of_n = fib(n);  
    unsigned long int result = fib(fib_of_n);  
      
    printf("fib(fib(%lu))=%lu\n", n, result);  
      
    return 0;  
}
