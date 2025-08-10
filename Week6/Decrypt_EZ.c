#include <stdio.h>
#include <ctype.h>

int main() {
    char text[201], alpha_low[26];
    scanf("%[^\n]", text);
    char alpha_up[] = {'A', 'B', 'X', 'Y', 'P', 'Q', 'R', 'M', 'N', 'C', 'E','D', 'K', 'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z', 'G', 'W', 'I'};
    for (int i=0; i<26; i++) {
        alpha_low[i] = tolower(alpha_up[i]);
    }
    int i=0;
    while (text[i]!='\0'){
        if (isupper(text[i])) {
            for (int j=0; j<26; j++) {
                if (text[i] == alpha_up[j]){
                    if (j > 20)
                        printf("%c", (alpha_up[(j+5)-26]));
                    else
                        printf("%c", alpha_up[j+5]);
                    break;
                }
            }
        }
        else if (islower(text[i])) {
            for (int j=0; j<26; j++) {  
                if (text[i] == alpha_low[j]){
                    if (j > 20)
                        printf("%c", (alpha_low[(j+5)-26]));
                    else
                        printf("%c", alpha_low[j+5]);
                    break;
                }
            }
        }else{
            printf("%c", text[i]);   
        }
        i++;
    }
    
    return 0;
}