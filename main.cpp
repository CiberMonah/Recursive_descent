#include <stdlib.h>
#include <stdio.h>
#include "recursive_descent.h"

int main() {
    const char* str  = "(1+1)*18";

    printf("%d", Get_G(str));
}