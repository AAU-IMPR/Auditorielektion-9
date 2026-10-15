#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    printf("I got %d arguments!\n", argc);
    for (int i = 0; i < argc; ++i) {
        printf("Argument [%d] is '%s'\n", i, argv[i]);
    }
    return 0;
}
