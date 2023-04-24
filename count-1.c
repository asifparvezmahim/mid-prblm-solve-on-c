#include <stdio.h>
int main()
{
    int size, i, oddCount = 0, evenCount = 0;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("%d %d", evenCount, oddCount);
    return 0;
}