#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// 定义矩阵的结构体
typedef struct {
    unsigned long long mat[2][2];
} Matrix;

// 矩阵乘法
Matrix multiply(Matrix a, Matrix b) {
    Matrix c;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c.mat[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                c.mat[i][j] += a.mat[i][k] * b.mat[k][j];
            }
        }
    }
    return c;
}

// 矩阵快速幂
Matrix matrix_pow(Matrix base, unsigned long long n) {
    Matrix result;
    result.mat[0][0] = result.mat[1][1] = 1;
    result.mat[0][1] = result.mat[1][0] = 0;

    while (n > 0) {
        if (n & 1) {
            result = multiply(result, base);
        }
        base = multiply(base, base);
        n >>= 1;
    }
    return result;
}

// 使用矩阵快速幂计算斐波那契数列
unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1) return n;

    Matrix base;
    base.mat[0][0] = 1; base.mat[0][1] = 1;
    base.mat[1][0] = 1; base.mat[1][1] = 0;

    Matrix result = matrix_pow(base, n - 1);
    return result.mat[0][0];
}

int main() {
    unsigned long long n;
    printf("Calculate Fibonacci number. n=");
    scanf("%llu", &n);

    unsigned long long fib_n = fibonacci(n);
    printf("Fibonacci(%llu) = %llu\n", n, fib_n);

    return 0;
}
