int **m1;
    m1 = readMatrix(3);
    int **m2;
    m2 = readMatrix(3);
    int **m3;
    m3 = matrix_sum(*m1, *m2);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }