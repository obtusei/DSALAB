#include <stdio.h>
#include <stdlib.h>

//multiply two matrix using dynamic memory allocation
int **multiply(int **a, int **b, int m, int n, int p)
{
    int i, j, k, **c;
    c = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
    {
        c[i] = (int *)malloc(p * sizeof(int));
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}
int main()
{

    return 0;
}
