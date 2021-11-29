#include <stdio.h>

int main ()
{
    int *ptr,a = 10;
    ptr=&a;
    *ptr +=0;
    printf("%d,%d\n", *ptr, a);
}