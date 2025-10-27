#include <stdio.h>
#include <math.h>
 
int main() {
    int people, age, child=0, adult=0;
    double limit, weight, total=0;
    scanf("%d\n%lf", &people, &limit);
    for (int i=0; i<people; i++){
        scanf("%d", &age);
        scanf("%lf", &weight);
        total += weight;
        if (age < 12){
            child += 1;
        }else{
            adult += 1;
        }
    }
    if ((child > 0 && adult == 0) || total > limit) {
        printf("Not Safe");
    }else{
        printf("Safe");
    }
    return 0;
}