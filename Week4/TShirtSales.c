#include <stdio.h>

int main() {
    float price, per, discount, pro;
    int buy;
    scanf("%f\n%f\n%d", &price, &per, &buy);

    discount = (price * buy) - ((price * buy) * (per / 100));
    pro = ((buy/3)*2) * price + (buy % 3) * price;
    if (discount > pro) {
        printf("Buy 2 Get 1\n%.2f", pro);
    } else {
        printf("Discount %.0f%%\n%.2f", per,discount);
    }
    return 0;
}
