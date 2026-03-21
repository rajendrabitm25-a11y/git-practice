#include<stdio.h>

int main(){
    int a;
    printf("Enter any number : \n");
    scanf("%d", &a);
    int check;
    check = 0;
    for (int i = 2; i <= a/2; i++){
        if (a == i){
            continue;
        }else if (i % a != 0) {
            check = 1;
            break;
        }
    }
    if (check == 1) {
        printf("%d is Not Prime", a);
    }else  {
        printf("%d is  Prime", a);
    }
    return 0;
}