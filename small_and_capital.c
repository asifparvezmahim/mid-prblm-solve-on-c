#include <stdio.h>
#include <string.h>
int main()
{
    char str[1005];
    scanf("%s", str);
    int i, countCapital = 0, countSmall = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            countSmall++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            countCapital++;
        }
    }

    printf("%d %d", countCapital, countSmall);
    return 0;
}