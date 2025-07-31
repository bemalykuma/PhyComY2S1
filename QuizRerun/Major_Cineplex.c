#include <stdio.h>

int main()
{
    int age, day, pay=0;
    scanf("%d\n%d", &age, &day);

    if (day == 4) {
        pay = 100;
    }else {
        if (age <= 12) {
            pay = 120;
        } else if (age <= 59) {
            pay = 220;
        } else {
            pay = 140;
        }
        if (day == 1 || day == 7) {
            pay += 20;
        }
    }
    printf("Ticket price: %d Baht", pay);
 
    return 0;
}