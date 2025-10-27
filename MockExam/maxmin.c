#include <stdio.h>
#include <string.h>

int findMax();
int findMin();

int main() {
    char type[4];
    scanf("%s\n", type);
    if (strcmp(type, "MAX") == 0) {
        findMax();
    }
    else if (strcmp(type, "MIN") == 0) {
        findMin();
    }
    return 0;
}

int findMax() {
    int num, mx = 0;
    scanf("%d", &num);
    mx = num;
    for (int i = 0; i<4; i++) {
        scanf(" %d", &num);
        if (num > mx){
            mx = num;
        }
    }
    printf("MAX : %d", mx);
}

int findMin() {
    int num, mn = 0;
    scanf("%d", &num);
    mn = num;
    for (int i = 0; i<4; i++) {
        scanf(" %d", &num);
        if (num < mn){
            mn = num;
        }
    }
    printf("MIN : %d", mn);
}