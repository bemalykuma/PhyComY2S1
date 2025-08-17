#include <stdio.h>
 
int main() {
    int game=0, danger=0;
    double total = 0, blood = 2800;
    scanf("%d", &game);
    int hour = (game * 30)/60.0;
    danger = blood * (30.0/100);
    while (hour > 0) {
        total += blood * (2.0/100);
        blood -= blood * (2.0/100);
        hour--;
    }
    printf("%.2f\n", total);
    if (total > danger){
        printf("Danger");
    }else {
        printf("Safe");
    }
 
    return 0;
}