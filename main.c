#include<stdio.h>

// datatype def
struct student {
    int roll_no; // 4
    char name[30]; // 1 * 30
    int age; // 4
    float percentage; // 4  = 42
};

void main() {
    struct student students[10]; // 42* 10 = 420

    printf("\nEnter Data\n");
    for (int i = 0; i < 3; ++i) { // 0,1,2
        printf("\n\nEnter Details of Student %d\n", i + 1);
        printf("Enter you Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter you name: ");
        scanf("%s", students[i].name);
        printf("Enter your age: ");
        scanf("%d", &students[i].age);
        printf("Enter your percentage: ");
        scanf("%f", &students[i].percentage);
    }

    for (int i = 0; i < 3; ++i) {
        if (students[i].percentage <= 95) {
            students[i].percentage += 5;
        }
    }

    printf("\nDetails of Students\n");
    for (int i = 0; i < 3; ++i) {
        printf("\n\nStudent %d\nRoll No:- %d\nName:- %s\nAge:- %d\nPercentage:- %.2f",
               i + 1,
               students[i].roll_no,
               students[i].name,
               students[i].age,
               students[i].percentage);
    }

}
