#include <stdio.h>
#include <stdlib.h>

//multiply two matrices are multipliable if the number of columns of the first matrix is equal to the number of rows of the second matrix and resultant matrix  will be of size r1*c2 use three nested for loops
int main()
{
    int r1, c1, r2, c2, i, j, k, sum = 0;
    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &r2, &c2);
    int a[r1][c1], b[r2][c2], c[r1][c2];
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (c1 == r2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < c1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }
        printf("The resultant matrix is\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The matrices are not multipliable\n");
    }
    return 0;
}
