#include <stdio.h>
#include <ctype.h>
 
int main(){
    char txt[1001];
    int countLow[26], countUp[26];

    for (int i = 0; i < 26; i++) {
        countLow[i] = 0;
        countUp[i] = 0;
    }

    scanf("%[^\n]", txt);

    for (int i = 0; txt[i] != '\0'; i++) {
        if (isupper(txt[i])) {
            countUp[txt[i]-'A']++;
        }else if (islower(txt[i])) {
            countLow[txt[i]-'a']++;
        }
    }

    for (int i=0; i<26; i++) {
        if (countLow[i] != 0) {
            printf("%c = %d\n", i + 'a', countLow[i]);
        }
        if (countUp[i] != 0) {
            printf("%c = %d\n", i + 'A', countUp[i]);
        }
    }

    return 0;
}