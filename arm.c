# include <stdio.h>
# include <math.h>

int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    int length = 0;
    while (num > 0) {
        num /= 10;
        length++;
    }
    num = temp;
    printf("Length of %d is %d", num, length);

    while (num > 0) {
        sum += pow(num % 10, length);
        num /= 10;
    }

    (temp == sum) ? printf("ARM") : printf("Not ARM");

}
