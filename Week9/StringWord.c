#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[151];
    int word_count = 0;
    char words[100][151]; // store up to 100 words
    int lengths[100];
    int idx = 0;

    // Read words until end of line
    while (scanf("%150s", word) == 1) {
        // Store word in lowercase
        int j = 0;
        while (word[j]) {
            word[j] = tolower((unsigned char)word[j]);
            j++;
        }
        strcpy(words[idx], word);
        lengths[idx] = j;
        idx++;
        word_count++;
        // Check if next char is newline
        int c = getchar();
        if (c == '\n' || c == EOF) break;
        ungetc(c, stdin);
    }

    printf("%d words\n", word_count);
    printf("----\n");
    for (int i = 0; i < word_count; i++) {
        printf("%s : %d\n", words[i], lengths[i]);
    }

    return 0;
}
