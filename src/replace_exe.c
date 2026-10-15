#include "fun_with_strings.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char input[] = "foodback";
    replace(input, 'o', 'e');
    printf("'%s'\n", input);

    return 0;
}
