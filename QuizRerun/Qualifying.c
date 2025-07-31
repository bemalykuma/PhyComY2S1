#include <stdio.h>

int main()
{
    float time1, time2, time3;
    char name1[36], name2[36], name3[36];
    scanf("%f %[^\n]", &time1, &name1);
    scanf("%f %[^\n]", &time2, &name2);
    scanf("%f %[^\n]", &time3, &name3);
    if (time1 <= time2 && time1 <= time3) {
        printf("%s is Fastest : %.3f", name1, time1);
    }else if (time2 <= time1 && time2 <= time3) {
        printf("%s is Fastest : %.3f", name2, time2);
    } else if (time3 <= time1 && time3 <= time2) {
        printf("%s is Fastest : %.3f", name3, time3);
    } else {
        printf("Error");
    }   

    return 0;
}