#include <stdio.h>

int main() {
    float my_bank, my_wallet, money;
    char action;
    int count;
    scanf("%f\n%f", &my_bank, &my_wallet);
    
    scanf("%c %f", &action, &money);
    while (action != 'E')
    {
        if (action == 'D') {
            if (my_wallet >= money) {
                my_bank += money;
                my_wallet -= money;
                count = 0;
            }else{
                count++;
            }
        } else if (action == 'W') {
            if (my_bank >= money) {
                my_wallet += money;
                my_bank -= money;
                count = 0;
            }else{
                count++;
            }
        }
        if (count == 3) {
            break;
        }
        scanf("%c %f", &action, &money);
        
    }

    printf("%.2f\n%.2f", my_bank, my_wallet);
    

    return 0;
}