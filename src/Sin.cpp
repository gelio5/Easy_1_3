#include "Sin.h"
double Abs(double val) noexcept
{
    if (val < 0)
        return -val;
    else
        return val;

}

double Sin(double x)
{
    double eps = 0.0000000001;
    double k, a = x;
    double s = x;
    int n=1;
    while (Abs(a) > eps) {
        k = - x * x / (2 * n * (2 * n + 1));
        a *= k;
        s += a;
        n++;
    }
    return s;
}