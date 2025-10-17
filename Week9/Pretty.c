#include <stdio.h>
#include <string.h>
#include <math.h>
 
void printStr(char txt[], int box);
int main() {
    int box_size;
    float distance = 0;
    char txt1[51], txt2[41], t1[51], t2[41];
    scanf("%d", &box_size);
    scanf(" %[^\n]", txt1);
    scanf(" %[^\n]", txt2);
     
    strcpy(t1, txt1);
    strcpy(t2, txt2);
    for (int i=0; i<box_size; i++) {
        printf("*");
    }
    printf("\n");
    printStr(t1, box_size);
 
    printf("\n");
    printStr(t2, box_size);
     
    printf("\n");
    for (int i=0; i<box_size; i++) {
        printf("*");
    }
    return 0;
}
void printStr(char txt[], int box) {
    float distance = ((box-2) - strlen(txt));
    int i=0;
    while (i < (box)) {
        if (i == 0 || i == box-1) {
            printf("*");
            i++;
        }
        else if (i <= ceil(distance/2) || i > floor(distance/2)+strlen(txt)) {
            printf(" ");
            i++;
        }else{
            printf("%s", txt);
            i += strlen(txt);
        }
    }
}