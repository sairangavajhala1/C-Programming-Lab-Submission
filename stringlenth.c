#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    char *p;
    int count = 0;

    printf("Enter string: ");
    scanf("%s", str);

    p = str;
    while (*ptr != '\0') {
        count++;
        p++;
    }

    printf("Length: %d", count);
    return 0;
}