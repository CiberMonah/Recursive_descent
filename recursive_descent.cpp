#include "recursive_descent.h"

const char* s;
int p = 0;

int Get_N() {
    int old_p = p;
    int val = 0;

    while('0' <= s[p] && s[p] <= '9') {
        val = val * 10 + s[p] - '0';
        p++;
    }

    return val;
}

int Get_G(const char* str) {
    s = str;
    p = 0;
    int val = Get_E();

    return val;
}

int Get_E() {
   
    int val1 = Get_T();
    char op = 0;

    while(s[p] == '+' || s[p] == '-') {
        op = s[p];
        p++;

        int val2 = Get_T();

        switch (op)
        {
        case '+':
            val1 += val2;
            break;
        case '-':
            val1 -= val2;
            break;
        default:
            err;
            break;
        }
    }
    return val1;
}

int Get_T() {
   
    int val1 = Get_P();
    char op = 0;

    while(s[p] == '*' || s[p] == '/') {
        op = s[p];
        p++;

        int val2 = Get_P();

        switch (op)
        {
        case '*':
            val1 *= val2;
            break;
        case '/':
            val1 /= val2;
            break;
        default:
            err;
            break;
        }
    }
    return val1;
}

int Get_P() {
    int val = 0;

    if(s[p] == '(') {
        p++;
        val = Get_E();
        p++;
        return val;
    } else {
        return Get_N();
    }
}