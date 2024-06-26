/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** distance
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "moon.h"

///////////////////////////////////////////////////////////////////////////////
float dist2f(v2f_t a, v2f_t b)
{
    float dx = b.x - a.x;
    float dy = b.y - a.y;

    return (sqrtf((dx * dx) + (dy * dy)));
}

///////////////////////////////////////////////////////////////////////////////
int dist2i(v2i_t a, v2i_t b)
{
    int dx = b.x - a.x;
    int dy = b.y - a.y;

    return ((int)sqrtf((float)((dx * dx) + (dy * dy))));
}

///////////////////////////////////////////////////////////////////////////////
int dist2u(v2u_t a, v2u_t b)
{
    int dx = b.x - a.x;
    int dy = b.y - a.y;

    return ((int)sqrtf((float)((dx * dx) + (dy * dy))));
}

///////////////////////////////////////////////////////////////////////////////
float dist3f(v3f_t a, v3f_t b)
{
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    float dz = b.z - a.z;

    return (sqrtf((dx * dx) + (dy * dy) + (dz * dz)));
}
