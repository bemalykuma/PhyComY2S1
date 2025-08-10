#include <stdio.h>
#include <ctype.h>

int main() {
    int num;
    scanf("%d", &num);

    char chr, his[26];
    int counts[26] = {0}, unique = 0;

    for (int i = 0; i < num; i++) {
        scanf(" %c", &chr);
        chr = tolower(chr);
        if (chr < 'a' || chr > 'z') {
            continue;
        }
        if (counts[chr - 'a'] == 0) {
            his[unique++] = chr;
        }
        counts[chr - 'a']++;
    }

    for (int i = 0; i < unique; i++) {
        printf("%c: %d\n", his[i], counts[his[i] - 'a']);
    }

    return 0;
}
