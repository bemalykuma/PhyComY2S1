#include <stdio.h>
 
int main() {
    int code[4], code_num=0, countR=0, countW=0;
    double price, km_num=0.0, liters[4], cost[4], rom=0, way=0;
 
    scanf("%lf", &price);
    for (int i=0; i<4; i++) {
        scanf("%d ", &code_num);
        code[i] = code_num;
    };
    for (int i=0; i<4; i++) {
        scanf("%lf ", &km_num);
        if (code[i] == 1) {
            liters[i] = 29.0/km_num;
            cost[i] = liters[i]*price + 60;
            way += cost[i];
            countW++;
        }else{
            liters[i] = 25.0/km_num;
            cost[i] = liters[i]*price;
            rom += cost[i];
            countR++;
        }
    };
    if (countR == 0) {
        countR = 1;
    }
    else if (countW == 0) {
        countW = 1;
    }
 
    for (int i=0; i<4; i++) {
        printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n", i+1, liters[i], cost[i]);
    };
    printf("Expressway: %.2lf Baht\nRomklao: %.2lf Baht", way/countW, rom/countR);
    
    return 0;
};