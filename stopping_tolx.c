#include "stopping_tolx.h"

/* true  = yes,stop
 * false = no,proceed */
bool stopping_tolx(double* x1, double* x0, int n, double tolx)
{
    int i = 0;
    bool res = true;
    while(res && i<n){
        if(fabs(x1[i] - x0[i]) >= tolx){
            res = false;
            break;
        }
        i++;
    }
    return res;
}

