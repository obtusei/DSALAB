#include <stdio.h>
#include <stdlib.h>

// function to return 2d array
int **readMatrix(int n, int m)
{
    int i, j;
    int **arr;
    arr = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(m * sizeof(int));
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            // arr[i][j] = i + j;
            scanf("%d", &arr[i][j]);
        }
    }
    return arr;
}

void displayMatrix(int **arr, int n, int m)
{
    int i, j;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int **addMatrix(int **m1, int **m2, int n, int m)
{
    int i, j;
    int **arr;
    arr = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(m * sizeof(int));
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            arr[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return arr;
}

// transpose of matrix
int **transpose(int **arr, int n, int m)
{
    int i, j;
    int **arr1;
    arr1 = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        arr1[i] = (int *)malloc(m * sizeof(int));
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }
    return arr1;
}

int main()
{
    int **m1;
    int **m2;
    int **m3;
    int **m4;
    int m, n;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &m, &n);
    printf("Enter the first %d * %d matrix : \n", m, n);
    m1 = readMatrix(m, n);
    printf("First %d * %d matrix is: \n", m, n);
    displayMatrix(m1, m, n);
    printf("Enter the second %d * %d matrix : \n", m, n);
    m2 = readMatrix(m, n);
    printf("Second %d * %d matrix is: \n", m, n);
    displayMatrix(m2, m, n);
    m3 = addMatrix(m1, m2, m, n);
    printf("Addition of two matrices is : \n");
    displayMatrix(m3, m, n);
    m4 = transpose(m3, m, n);
    printf("Transpose of the matrix is : \n");
    displayMatrix(m4, m, n);
    return 0;
}
