#include <stdio.h>

int main() {
    int book_id, temp;
    scanf("%d", &book_id);
    if (book_id < 1000){
        temp = book_id % 10;
        if (book_id % 5 == 0) {
            printf("Science");
        }else if (temp == 3 || temp == 7) {
            printf("Literature");
        }else {
            printf("General Collection");
        }
    }
    else if (book_id >= 1000) {
        temp = book_id % 100;
        if (book_id % 4 == 0) {
            printf("Reference");
        }else if (temp == 11 || temp == 22 || temp == 33) {
            printf("History");
        }else {
            printf("Unclassified");
        }
    }
    return 0;
}