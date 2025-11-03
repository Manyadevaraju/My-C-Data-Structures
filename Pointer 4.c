#include <stdio.h>

int main() {
    int a = 22;       
    int *p;           
    p = &a;           
    printf("Before updating: a = %d\n", a);
   *p = 12;          
    printf("After updating: a = %d\n", a);

    return 0;
}
