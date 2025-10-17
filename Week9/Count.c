#include <stdio.h>
#include <ctype.h>
 
int main() {
    char find, txt[151];
    scanf("%c", &find);
    scanf(" %[^\n]", txt);
 
    int count=0;
    int i = 0;
    while (txt[i] != '\0') {
        if (tolower(txt[i]) == tolower(find)) {
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}