# include <stdio.h>

void print(int *arr,int len){ // int * arr = address
    for (int i = 0; i < len; ++i) {
        printf("%d\n",*(arr + i)) ;
    }
}

// *(arr + i)) == arr[i]
//  arr + i    == &arr[i]

// int a = 5;
// &a
// int * ptr = &a;
// *ptr

// arr = 08
// arr = 20


int main(){
    int arr[] = {1,2,3,4}; // arr = [      ]
    print(arr,4);
}
