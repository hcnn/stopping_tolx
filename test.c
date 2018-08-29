#include <stdio.h>  // printf
#include "stopping_tolx.h"

int main()
{
    double tolx = .01;
    double x1[] = {.10, .05, .01};
    double x0[] = {.10, .05, .01};
    
    bool res = stopping_tolx(x1, x0, 3, tolx);
    printf("%s\n", res ? "true -> stop" : "false -> proceed");

    x0[2] = .02;    
    res = stopping_tolx(x1, x0, 3, tolx);
    printf("%s\n", res ? "true -> stop" : "false -> proceed");
}
