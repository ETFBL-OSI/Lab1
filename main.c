#include <stdarg.h>

double minOfN(int n, ...)
{
    double min, tmp;
    va_list nums;
    va_start(nums, n);
    min = va_arg(nums, double);

    for (int i = 1; i < n; i++)
    {
        tmp = va_arg(nums, double);
        if(tmp < min)
            min = tmp;
    }

    va_end(nums); 
    return min;
}


int faktorijel(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
