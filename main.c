#include<stdio.h>

//void swap(int *x, int *y) {   // x // y
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//    printf("\na=%d,b=%d", *x, *y);
//}

void main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 4 * 10 = 40  arr - base address
    int *ptr = arr;
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ", *(ptr + i));
//    }

    while (ptr != arr + 10) { // 80 + 10 * 4 = 120  // 1,
        printf("%d \n", *(ptr));
        ptr++;
    }

    while (ptr != arr) { // 80 + 10 * 4 = 120  // 1,
        printf("%d \n", *(--ptr));
    }

    // ptr = arr ( ptr ,arr not same )
    // ptr[i] =  *(ptr + i)
    // arr[i] = *(arr + i)
    // ptr++ // ptr = ptr + 2
    // arr++ Not possible



//    int a = 5, b = 3;
//    printf("a=%d,b=%d", a, b);
//    // a= 3 b =5
//    swap(&a, &b); // call by reference
//    printf("\na=%d,b=%d", a, b);



//    int a = 5;
//    int *ptr = &a; // & addressof referencing
//    printf("%d", a);
//    printf("\n%d", *ptr); // * indirection valueof de-referencing
//    printf("\n%d", &a);
//    printf("\n%d", ptr);

    // ptr == &a
    // *ptr == a

}
