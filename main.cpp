#include <stdlib.h>
#include <stdio.h>
#include "recursive_descent.h"

int main() {
    const char* str  = "2*3*4";

    printf("%d", Get_G(str));
}