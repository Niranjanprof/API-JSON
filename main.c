#include<stdio.h>

int main() {

//    int i = 1;
//    while (i<10){
//        printf("%d\n",i);
//         i++;
//    }

//    for (int i = 1; i < 10; i++) {
//        printf("%d\n", i);
//    }

    // i = 9
    // 10 < 10
    // 2

//    int a = 123;
//    int b = 10;
//    int c = a/b; // Division  12
//    int d = a%b; // Remainder 3
//
//    printf("Quo :- %d\nRem :- %d",c,d);

// Sum of Nat Numbers

//    int limit = 0;
//    printf("Enter a limit: ");
//    scanf("%d", &limit);
//
//    int sum = 0;
//    for (int i = 1; i < limit + 1; i++) {
//        sum = sum + i;
//        printf("Sum :- %d : i :- %d\n", sum, i);
//    }
//    printf("Sum:- %d\n", sum);

    // sum  = 55   i = 11
    // 11 <= 10
    // sum  = 45 + 10
    // i++ = 11
//    int sum = 0;
//    int i = 1;
//    while (i < 11) {
//        sum += i;
//        i++;
//    }
//    printf("Sum:- %d\n", sum);

//    int number = 0;
//    printf("Enter a number: ");
//    scanf("%d", &number);
//
//    if (number % 2 == 0) {
//        printf("Even Number");
//    } else {
//        printf("Odd Number");
//    }

// Sum of digits

    // 456 = 4+5+6 = 15

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int rem;
    int sum = 0;

//    int temp = num;
    printf("Sum of digits in %d = ", num);
    while (num > 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }
//    printf("Num = %d\n", num);
    printf("%d", sum);

    // 4 <= 4
    // rem = 4
    // sum = 15
    // num = 0
    // i = 4

    // palindrome

    int num;
    printf("Enter a number to check whether it's palindrome or not: ");
    scanf("%d", &num);
    int temp = num;
    int rev = 0;
    while (num != 0) {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    (temp == rev) ? printf("Palindrome") : printf("Not a Palindrome");

    // factorial

    // 5! = 5*4*3*2*1

    int num = 5;
    int fact = 1;
    for (; num > 1; num--) {
        fact = fact * num;
        printf("num = %d : fact = %d\n", num, fact);
    }

    printf("Fact: - %d", fact);

//   371 = 3^3 + 7^3 + 1^3 = 27 + 343 + 1 = 371
// num of digits = 3



    return 0;
}
