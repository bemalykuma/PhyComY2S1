#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str=NULL;
    str = (char*)malloc(101*sizeof(char));
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);   // อ่านทั้งบรรทัดจนเจอ Enter
    printf("You entered: %s\n", str);
    return 0;
}