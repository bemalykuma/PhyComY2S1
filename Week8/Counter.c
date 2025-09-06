#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *str = NULL;
    int low=0, up=0, num=0;

    str = (char*)malloc(101*sizeof(char));
    scanf("%[^\n]", str);
    
    char *ptr = str;
    while (*ptr != '\0') {
        if (islower(*ptr)) {
            low++;
        }
        else if (isupper(*ptr)) {
            up++;
        }
        else if (isdigit(*ptr)) {
            num++;
        }
        *ptr++;
    }
    printf("Lowercase letters: %d\nUppercase letters: %d\nDigits: %d", low, up, num);
    return 0;
}