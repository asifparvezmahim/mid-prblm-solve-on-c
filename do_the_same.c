#include <stdio.h>
int main()
{
    int i, j, n, k;
    scanf("%d%d", &n, &k);

    for (j = 1; j <= k; j++)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}