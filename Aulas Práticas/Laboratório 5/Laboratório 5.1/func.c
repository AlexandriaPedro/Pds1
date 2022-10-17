#include "func.h"

int func_h_(int num) {
    int i, t1, t2, t3;

    t1 = 0;
    t2 = 1;
    i = 2;

    if(num == 0) {
        printf("0");
        exit(0);
    }
    else if(num == 1) {
        printf("1");
        exit(0);
    }
    else {
        while(i <= num) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        i++;
        }
    }

    return (t3);
}
