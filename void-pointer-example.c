#include <stdio.h>

int main() {
    int *p;
    char a[4096] = "Hello";
    void *q = (void*) a;
    char *temp = q;
    
    printf("%s\n%s", temp, q);

    return 0;
}
