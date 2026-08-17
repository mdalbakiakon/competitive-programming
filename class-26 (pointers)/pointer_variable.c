#include <stdio.h>

int main()
{

    // pointer variable
    int a = 10;

    // b here holds the address of a
    //  so we make a pointer variable as *b to mean that it will hold address value

    int *b = &a;

    // a's address as b's value
    printf("%x\n", b);

    // b's actual address
    printf("%x\n", &b);

    return 0;
}