#include "Sin.h"
double Abs(double val) noexcept
{
    if (val < 0)
        return -val;
    else
        return val;

}

double Sin(double val)
{
    double accuracy = 0.0000000001;
    double rowElement, deviation = val;
    double sinus = val;
    int powCounter=1;
    while (Abs(deviation) > accuracy) {
        rowElement = - val * val / (2 * powCounter * (2 * powCounter + 1));
        deviation *= rowElement;
        sinus += deviation;
        powCounter++;
    }
    return sinus;
}