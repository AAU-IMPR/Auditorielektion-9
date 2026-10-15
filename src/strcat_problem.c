#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char important1[] = "aaaaa";
    char s1[] = "Mickey ";
    char important2[] = "bbbbb";
    char s2[] = "Mouse";

    char* result = malloc(strlen(s1) + strlen(s2) + 1);
    // char result[2];  // TODO: Try using this version of result instead, and see what happens to the 'important' data.

    result[0] = '\0';
    strcat(result, s1);
    strcat(result, s2);

    printf("%s\n", result);
    printf("Important '%s', '%s'\n", important1, important2);
    return 0;
}
