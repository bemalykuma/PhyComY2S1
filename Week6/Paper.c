#include <stdio.h>
#include <math.h>

int main() {
    char a;
    int num1=0, num2=0;
    scanf("%c%d\n", &a, &num1);
    scanf("%c%d", &a, &num2);
    
    printf("%.0f", pow(2, num2-num1));
    return 0;
}