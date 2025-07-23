#include <stdio.h>

int main() {
    char s, is_driver;
    float weight, cc, per, drink, male, female, blood;
    int can, hours;

    scanf("%c\n%f\n%c\n%f\n%f\n", &s, &weight, &is_driver, &cc, &per);
    scanf("%d\n%d", &can, &hours);

    drink = can * (( per * cc ) / 100);
    male = drink / (weight * 0.68 * 10);
    female = drink / (weight * 0.55 * 10);
    blood = (s == 'M' ? male - (hours * 0.015) : female - (hours * 0.015));

    if (blood <= 0.050 && is_driver == 'Y') {
        printf("Safe");
    } else {
        printf("Not Safe");
    }
    
    return 0;
}   
