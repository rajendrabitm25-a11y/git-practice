#include<stdio.h>

void main()  {
    printf("Enter any number:  \n");
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is Even Number", n);
    } else {
        printf("%d is Odd Number", n);
    }
}