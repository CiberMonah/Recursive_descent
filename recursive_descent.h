#ifndef RECURSIVE_DESCENT_H_INCLUDED
#define RECURSIVE_DESCENT_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

#define err {                               \
    printf("Syn error %d\n", __LINE__);     \
}

int Get_G(const char* str);
int Get_N();
int Get_E();
int Get_T();
int Get_P();

#endif