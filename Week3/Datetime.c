#include <stdio.h>
 
int main() {
    long num, days, hours, minutes, seconds, num_draft;
    scanf("%ld", &num);
    num_draft = num;
    days = num / 86400;
    num -= days * 86400;
    hours = num / 3600;
    num -= hours * 3600;
    minutes = num / 60;
    num -= minutes * 60;
    seconds = num;

    printf("%ld s = %ld d %ld h %ld m %ld s",num_draft, days, hours, minutes, seconds);
    return 0;
}