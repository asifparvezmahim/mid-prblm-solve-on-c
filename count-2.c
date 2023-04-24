#include <stdio.h>
#include <string.h>
int main()
{
    char str[1002];
    scanf("%s", str);
    int i, countVowel = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            countVowel++;
        }
    }
    printf("%d", countVowel);
    return 0;
}