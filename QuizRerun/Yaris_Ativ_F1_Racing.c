#include <stdio.h>
int main() {
    int safety, round, round_safe, count = 0;
    float distance;
    scanf("%d\n%f\n%d\n%d", &safety, &distance, &round, &round_safe);
     
    if (safety == 0) {
        count++;
    }if (distance >= 1.0){
        count++;
    }if (round <= 2){
        count++;
    }if (round <= round_safe + 1){
        count++;
    }
 
    count > 0 ? printf("DRS not allowed %d", count) : printf("DRS allowed");
 
    return 0;
}