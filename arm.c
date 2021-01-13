# include<stdio.h>

int strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

void strccat(char first[], char sec[]) {
    int i = strlen(first);
    int j = 0;
    while (sec[j] != '\0') {
        first[i] = sec[j];
        i++;
        j++;
    }
    first[i] = '\0';
}

void main() {
    char str[20];
    char abc[20];

    printf("Enter first name: ");
    gets(abc);
    printf("Enter last name: ");
    gets(str);
    strccat(abc, str);
    printf("String :- %s", abc);
}
