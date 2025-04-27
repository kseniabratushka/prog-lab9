#include <stdio.h>

#define N 5

int max(int a, int b) 
{
    return (a > b) ? a : b;
}

int main() 
{
    system("chcp 65001");
    int X[N], Y[N], Z[N];
    int i;

    printf("Введіть %d елементів масиву X:\n", N);
    for (i = 0; i < N; i += 1) 
    {
        printf("X[%d] = ", i);
        scanf("%d", &X[i]);
    }

    printf("Введіть %d елементів масиву Y:\n", N);
    for (i = 0; i < N; i += 1) 
    {
        printf("Y[%d] = ", i);
        scanf("%d", &Y[i]);
    }

    for (i = 0; i < N; i += 1) 
    {
        Z[i] = max(X[i], Y[i]);
    }

    printf("\nМасив Z:\n");
    for (i = 0; i < N; i += 1) 
    {
        printf("Z[%d] = %d\n", i, Z[i]);
    }

    return 0;
}
