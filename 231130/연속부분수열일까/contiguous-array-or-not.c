#include <stdio.h>
#include <stdlib.h>

void input(int *p, int k)
{
    int i;
    for (i = 0; i < k; i++)
    {
        scanf("%d", &p[i]);
    }
}

int isSubset(int *x, int *y, int n, int m)
{
    int i, j, start;
    for (i = 0; i < n; i++)
    {
        if (x[i] == y[0])
        {
            start = i;
            for (j = 0; j < m && i + j < n; j++)
            {
                if (x[i + j] != y[j])
                {
                    return 0;
                }
            }
            if (j == m)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n, m, *p1, *p2, sw;
    scanf("%d %d", &n, &m);

    if (n <= 0 || m <= 0)
    {
        printf("Invalid input size.\n");
        return 1;
    }

    p1 = (int *)malloc(sizeof(int) * n);
    p2 = (int *)malloc(sizeof(int) * m);

    if (p1 == NULL || p2 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    input(p1, n);
    input(p2, m);
    sw = isSubset(p1, p2, n, m);

    if (sw == 1)
        printf("Yes\n");
    else
        printf("No\n");

    free(p1);
    free(p2);

    return 0;
}