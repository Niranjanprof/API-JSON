#include<stdio.h>

// datatype def
struct student {
    int roll_no; // 4
    float percentage; // 4  = 8
};

union dummy {
    int roll_no; // 4
    float percentage; // 4   // 4
};

void main() {
    struct student student1;
    union dummy dummy1;

    student1.roll_no = 45;
    student1.percentage = 90;

    printf("Roll No:- %d\nPercentage:- %.2f\n",
           student1.roll_no,
           student1.percentage);

    dummy1.roll_no = 30;
    dummy1.percentage = 45;

    printf("Roll No:- %d\nPercentage:- %.2f\n",
           dummy1.roll_no,
           dummy1.percentage);

}
