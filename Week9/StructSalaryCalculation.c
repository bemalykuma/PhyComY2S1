#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%d", &num);
    
    struct Record {
        char id[10];
        char name[100];
        long salary;
        long sales;
    }rec[num];
    
    for (int i=0; i<num; i++) {
        scanf(" %s %s %ld %ld", rec[i].id, rec[i].name, &rec[i].salary, &rec[i].sales);
    }
    
    char find[10], count=0;
    scanf(" %s", &find);
    
    for (int i=0; i<num; i++) {
        if (strcmp(find, rec[i].id) == 0) {
            double commision = rec[i].sales * (2.0/100);
            double total = commision +rec[i].salary;
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf", rec[i].id, rec[i].name, rec[i].sales, commision, rec[i].salary, total);
            count = 1;
            break;
        }
    }
    if (count == 0){
        printf("ID not found !!!");
    }

}