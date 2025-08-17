#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char name[61], note[n][61];
    int i = 0;
    while (i < n){
        scanf(" %[^\n]", name);

        int p = 0;
        while (name[p] != '\0') {
            if (p == 0 || name[p-1] == ' '){
                name[p] = toupper(name[p]);
            }else{
                name[p] = tolower(name[p]);
            }
            p++;
        }
        strcpy(note[i], name);
        i++;
    }
    
    int last = n - 1;
    while (last > 0) {
        int new_last = 0;
        for (int j = 0; j < last; j++) {
            if (strcmp(note[j], note[j + 1]) > 0) {
                char temp[61];
                strcpy(temp, note[j]);
                strcpy(note[j], note[j + 1]);
                strcpy(note[j + 1], temp);
                new_last = j; // จดตำแหน่งสลับล่าสุด
            }
        }
        last = new_last;
    }

    for (i = 0; i < n; i++) {
        printf("%s\n", note[i]);
    }
    

    return 0;
}