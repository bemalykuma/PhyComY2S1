#include <stdio.h>
 
int main() {
    char name1[61], name2[61], day1[7], day2[7];
    int total1=0, total2=0, avg1=0, avg2=0, num, onemore=0, twomore=0, equal=0;
 
    scanf("%[^\n]", name1);
    for (int i=0; i<7; i++) {
        scanf("%d ", &num);
        day1[i] = num;
        total1 += num;
    };
    avg1 = total1/7;
     
    scanf("%[^\n]", name2);
    for (int i=0; i<7; i++) {
        scanf("%d ", &num);
        day2[i] = num;
        total2 += num;
    };

    avg2 = total2/7;
 
    for (int i=0; i<7; i++) {
        if (day1[i] < day2[i]) {
            onemore++;
        }else if (day1[i] > day2[i]) {
            twomore++;
        }else{
            equal++;
        }
    };
    printf("%s: %d minutes, average %d minutes/day\n", name1, total1 ,avg1);
    printf("%s: %d minutes, average %d minutes/day\n", name2, total2 ,avg2);
    printf("Faster days - %s: %d, %s: %d, Equal: %d", name1, onemore, name2, twomore, equal);
    return 0;
};