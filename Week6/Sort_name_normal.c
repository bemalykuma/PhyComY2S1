#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char name[61], note[20][61];
    int i = 0, p = 0;
    while (i < 20)
    {
        scanf(" %[^\n]", name);
        while (name[p] != '\0') {
            if (p == 0 || name[p-1] == ' '){
                name[p] = toupper(name[p]);
            }else{
                name[p] = tolower(name[p]);
            }
            p++;
        }
        p = 0;
        strcpy(note[i], name);
        i++;
    }
    for (i = 0; i < 20 - 1; i++) { //ไม่รวมตัวสุดท้าย
        for (int j = 0; j < 20 - 1 - i; j++) {
            if (strcmp(note[j], note[j + 1]) > 0) { //ถ้ามากกว่า
                char temp[61];
                strcpy(temp, note[j]);
                strcpy(note[j], note[j + 1]);
                strcpy(note[j + 1], temp);
            }
        }
    }

    for (i = 0; i < 20; i++) {
        printf("%s\n", note[i]);
    }
    

    return 0;
}