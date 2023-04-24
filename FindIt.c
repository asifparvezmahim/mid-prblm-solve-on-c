#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, count = 0;
    scanf("%d", &x);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    if (count != 0)
    {
        printf("%d\n", count);
    }

    else
    {
        printf("0\n");
    }

    return 0;
}