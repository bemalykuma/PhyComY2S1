#include <stdio.h>

int main() {
    char fname[30], lname[30], student[9], da;
    int day, month, year;
    float gpa;

    scanf("%s\n%s", fname, lname);
    scanf("%s", student);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", fname, lname);
    printf("ID: %s\n", student);
    printf("DOB: %02d-%02d-%04d\n", day, month, year);
    printf("GPA: %.2f", gpa);

    return 0;
}
