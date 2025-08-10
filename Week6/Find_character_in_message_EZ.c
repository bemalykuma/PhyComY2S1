#include <stdio.h>
#include <ctype.h>

int main() {
    char text[301], find;
    int count=0, index=0, position[301], add=0;
    scanf("%[^\n]\n%c", text,&find);

    while (text[index] != '\0') {
        if (tolower(find) == tolower(text[index])) {
            count++;
            position[add++] = index+1;
        }
        index++;
    }
    if (count > 0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, find);
        printf("Position: ");
        int i = 0;
        while (i < count-1) {
            printf("%d, ", position[i++]);
        }
        printf("%d", position[count-1]);

    }else
        printf("Not found.");
    return 0;
}