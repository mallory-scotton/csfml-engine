/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** max
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "moon.h"

///////////////////////////////////////////////////////////////////////////////
int max(uint_t n, int x, ...)
{
    int maximum = x;
    int arg;
    va_list args;

    va_start(args, x);
    for (uint_t i = 0; i < (n - 1); i++) {
        arg = va_arg(args, int);
        if (arg > maximum)
            maximum = arg;
    }
    va_end(args);
    return (maximum);
}

///////////////////////////////////////////////////////////////////////////////
float maxf(uint_t n, float x, ...)
{
    float maximum = x;
    float arg;
    va_list args;

    va_start(args, x);
    for (uint_t i = 0; i < (n - 1); i++) {
        arg = (float)va_arg(args, double);
        if (arg > maximum)
            maximum = arg;
    }
    va_end(args);
    return (maximum);
}

///////////////////////////////////////////////////////////////////////////////
double maxd(uint_t n, double x, ...)
{
    double maximum = x;
    double arg;
    va_list args;

    va_start(args, x);
    for (uint_t i = 0; i < (n - 1); i++) {
        arg = va_arg(args, double);
        if (arg > maximum)
            maximum = arg;
    }
    va_end(args);
    return (maximum);
}
