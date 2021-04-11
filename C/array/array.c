#include <stdio.h>

int main(void) {
    char str[11];
    for (unsigned int i = 0; i < 10; ++i) {
        str[i] = '0' + i;
    }
    str[10] = '\0';
    printf("This is the value of the array: %s", str);
    return 0;
}