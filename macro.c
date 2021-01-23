# include <stdio.h>

void print(int *ptr) {
    *(ptr + 2) = 10; // *(ptr + 2) = ptr[2]
    for (int i = 0; i < 5; ptr++, i++) {
        printf("%d ", *(ptr));
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    print(arr);
    printf("\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }

}
