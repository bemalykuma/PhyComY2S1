#include <stdio.h>

int main() {
    int age, height, weight, cond1 = 0, cond2 = 0, cond3 = 0, cond4 = 0, avg_age=0;
    float avg_height=0, avg_weight=0;
    for (int i=0; i < 50; i++) {
        scanf("%d %d %d", &age, &height, &weight);
        avg_age += age;
        avg_height += height;
        avg_weight += weight;

        if (age >= 20 && height >= 160) {
            cond1++;
        }
        if (age < 20 && (height <= 180 || weight >= 60)) {
            cond2++;
        }
        if (age >= 30 && weight >= 40 && weight <= 80) {
            cond3++;
        }
        if (age < 40 && (weight < 85 || height <= 200)) {
            cond4++;
        }

    }
    printf("Age >= 20 and Height >= 160: %d\nAge < 20 and Height <= 180 or Weight >= 60: %d\nAge >= 30 and Weight >= 40 and Weight <= 80: %d\nAge < 40 and Weight < 85 or Height <= 200: %d\n", cond1,cond2,cond3,cond4);
    printf("Average Age: %d\nAverage Height: %.2f\nAverage Weight: %.2f", avg_age/50, avg_height/50, avg_weight/50);
    

    return 0;
}