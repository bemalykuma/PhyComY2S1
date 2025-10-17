#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char find[10];
    int count=0;
    scanf("%d\n%s", &num, find);

    struct Book {
        char id[10];
        char name[100];
        char author[100];
    } book[num];

    for (int i=0; i<num; i++) {
        scanf("\n%s %s %s", book[i].id, book[i].name, book[i].author);
        if (strcmp(find , book[i].id) == 0) {
            printf("%s %s %s", book[i].id, book[i].name, book[i].author);
            count = 1;
        }
    }
    if (count == 0) {
        printf("Not Found");
    }


    return 0;
}