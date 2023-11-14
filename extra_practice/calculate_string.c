#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int len;

    printf("input: ");
    scanf("%s", s);
    len = strlen(s);

    printf("length: %d", len);
    return 0;
}
