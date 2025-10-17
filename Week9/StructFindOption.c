#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct student_info {
    char name[61];
    char surname[61];
    char sex[7];
    int age;
    char id[13];
    float gpa;
};
void print_students(struct student_info std[], int n);
void swap(struct student_info a[], int i, int j);
void sort_name(struct student_info a[], int n);
void sort_surname(struct student_info a[], int n);
void sort_id(struct student_info a[], int n);

int main() {
    struct student_info std[20];
    int n = 20;
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s %d %s %f", std[i].name, std[i].surname, std[i].sex, &std[i].age, std[i].id, &std[i].gpa);
    }

    char option[10];
    scanf("%s", option);
    for (int i = 0; i < strlen(option); i++)
    {
        option[i] = tolower(option[i]);
    }
    
    if (strcmp(option, "name") == 0)
        sort_name(std, n);
    else if (strcmp(option, "surname") == 0)
        sort_surname(std, n);
    else if (strcmp(option, "id") == 0)
        sort_id(std, n);

    print_students(std, n);

    return 0;
}

void print_students(struct student_info std[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %c %s (%d) ID: %s GPA %.2f\n",
            (std[i].sex[0] == 'm' || std[i].sex[0] == 'M') ? "Mr" : "Miss",
            std[i].name[0], std[i].surname, std[i].age, std[i].id, std[i].gpa);
    }
}

void swap(struct student_info a[], int i, int j) {
    struct student_info temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void sort_name(struct student_info a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(a[i].name, a[j].name) > 0) {
                swap(a, i, j);
            }
        }
    }
}

void sort_surname(struct student_info a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(a[i].surname, a[j].surname) > 0) {
                swap(a, i, j);
            }
        }
    }
}

void sort_id(struct student_info a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(a[i].id, a[j].id) > 0) {
                swap(a, i, j);
            }
        }
    }
}
