#include <stdio.h>
#include <stdlib.h>

int main(void) {
    if (puts("Hello, Chris!") == EOF) {
        return EXIT_FAILURE;
        // code executes only if the put function fails
    }
    return EXIT_SUCCESS;
}