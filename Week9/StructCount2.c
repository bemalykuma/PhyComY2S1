#include <stdio.h>
#include <ctype.h>

int main() {
    struct Count {
        int chr;
        int word;
        int line;
    };
    struct Count cnt = {0, 0, 0};
    char txt[451];

    while (1){
        scanf(" %[^\n]", txt);
        if (txt[0] == '.') {
            break;
        }
        cnt.line++;
        int i = 0;
        while (txt[i] != '\0'){
            if (isalpha(txt[i])) {
                cnt.chr++;
            }else if (txt[i] == ' '){
                cnt.word++;
            }
            i++;
        }
        cnt.word++;

    }
    printf("Char = %d, word = %d, line = %d", cnt.chr, cnt.word, cnt.line);

}