#include <stdio.h>
#include <string.h>
int main()
{
    char str[1005];
    scanf("%s", str);
    int len = strlen(str);
    int i, cnt[1005] = {0};
    for (i = 0; i < len; i++)
    {
        int value = str[i] - 97;
        cnt[value]++;
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, cnt[i]);
    }
    return 0;
}