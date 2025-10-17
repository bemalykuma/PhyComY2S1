#include <stdio.h>
 
int main() {
    char txt[200];
    scanf("%[^\n]", txt);
    int i = 0;
    printf("%c.", txt[i]);
    while (txt[i] != '\0') {
        if (txt[i] == ' ') {
            printf("%c.", txt[i+1]);
            break;
        }
        i++;
    }
    return 0;
}