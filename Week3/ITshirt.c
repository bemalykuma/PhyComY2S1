#include <stdio.h>
 
int main() {
    double price, pro, result;
    int buy;
    scanf("%lf\n%lf\n%d", &price, &pro, &buy);
    pro /= 100;
    result = (price*buy) - (price*buy)*pro;
    printf("%.2lf",result);
    return 0;
}