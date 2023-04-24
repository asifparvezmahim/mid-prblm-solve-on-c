#include <stdio.h>
#include <math.h>
int main()
{
    int M1, M2, D;
    scanf("%d%d%d", &M1, &M2, &D);
    int res1 = (M1 / M2);
    if (res1 % 2 == 0)
    {
        printf("%d\n", res1 * D);
    }
    else

        return 0;
}