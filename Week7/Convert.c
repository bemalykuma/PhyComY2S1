#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isEqual(char x[], char y[]);
void convert(char x[]);


int main() {
    char name1[102], name2[102];
    scanf("%[^\n]\n%[^\n]", &name1, &name2);
    convert(name1);
    convert(name2);
    printf("*** Results ***\n%s\n%s\n***************\n", name1, name2);
    isEqual(name1, name2);
    return 0;
}

void convert(char x[]) {
    char new[102];
    for (int i=0; i<strlen(x); i++){
        if (islower(x[i])) {
            x[i] = toupper(x[i]);
        }
        else if (isupper(x[i])) {
            x[i] = tolower(x[i]);
        }
    }
}

int isEqual(char x[], char y[]) {
    int count=0;
    if (strlen(x) == strlen(y)) {
        for (int i=0; i<strlen(x); i++) {
            if (tolower(x[i]) != tolower(y[i])) {
                count++;
            }
        }
        if (count > 0) {
            printf("Both strings are not the same.");
        }else{
            printf("Both strings are the same.");
        }
    }else{
        printf("Both strings are not the same.");
    }
    return 0;
}
