#include<stdio.h>

struct demo {
    int data;
};  // 5

void main() {
    struct demo value = {1};
    struct demo *ptr = &value;
    int a  = value;
    printf("data :- %d\n", a);
//    printf("char :- %c\n", value.info);
//    printf("data :- %d\n", ptr->data);
//    printf("char :- %c\n", ptr->info);
//
//    // value = *ptr
//    // ptr = &value
//    printf("data :- %d\n", (*ptr).data);
//    printf("char :- %c\n", (*ptr).info);
//    printf("data :- %d\n", (&value)->data);
//    printf("char :- %c\n", (&value)->info);
}
