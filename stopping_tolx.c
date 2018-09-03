#include "stopping_tolx.h"

/* true  = yes,stop
 * false = no,proceed */
bool stopping_tolx(const double* x1, const double* x0, size_t n, double tolx)
{
    size_t i = 0;
    bool res = true;
    while(i<n){
        if(fabs(x1[i] - x0[i]) >= tolx){
            res = false;
            break;
        }
        i++;
    }
    return res;
}

