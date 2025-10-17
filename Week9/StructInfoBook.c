#include <stdio.h>
#include <string.h>

int main() {
    struct student_info {
        char name[61];
        char surname[61];
        char sex[7];
        int age;
        char id[13];
        float gpa;
    } std;
    scanf("%s %s %s %d %s %f", std.name, std.surname, std.sex, &std.age, std.id, &std.gpa);
    std.sex[3] == 'e' ? strcpy(std.sex, "Mr") : strcpy(std.sex, "Miss");

    printf("%s %c %s (%d) ID: %s GPA %.2f", std.sex, std.name[0], std.surname, std.age, std.id, std.gpa);
    return 0;
}