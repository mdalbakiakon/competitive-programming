#include<stdio.h>

int main(){

    int a = 10;
    printf("%d \n", a);
    printf("%x \n", &a);
    printf("%p \n", &a);
    printf("%p \n", (void*)&a);
    return 0;
}