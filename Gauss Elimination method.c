//C Program to Implement Gauss Elimination Method

#include <stdio.h>
int main()
{
    printf("Enter Unknown Variables : ");
    int n;
    scanf("%d", &n);
    float a[n][n + 1];
    int i = 0, j = 0, k = 0;
    float m;

    printf("Enter Data : \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d row.\n", (i + 1));
        for (j = 0; j < (n + 1); j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Augmented Matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n + 1); j++)
        {
            printf("%.2f\t", a[i][j]);
            if (j == (n - 1))
            {
                printf("| ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < (n - 1); i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            m = a[j][i] / a[i][i];
            for (k = 0; k < (n + 1); k++)
            {
                a[j][k] = a[j][k] - (m * a[i][k]);
            }
        }
    }
    float b[n];
    float s;
    b[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
    for (i = (n - 2); i >= 0; i--)
    {
        s = 0;
        for (j = (i + 1); j < n; j++)
        {
            s = s + (a[i][j] * b[j]);
            b[i] = (a[i][n] - s) / a[i][i];
        }
    }
    printf("Answer :\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f\t", b[i]);
    }
}


