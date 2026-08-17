#include <stdio.h>

int main()
{
    int a = 10;
    printf("%x \n", &a); // address of a variable in memory
    printf("%d \n", a);  // value of a variable

    // what if u have the address and need to see the value adn cant use the direct a print

    printf("value finding from address: %d \n", *(&a));

    // - * is called de-reference so if &a is an address then finding value inside address a by dereferencing

    // in C actually it is happening behind the scene of normal printf to see value or accessing value

    return 0;
}