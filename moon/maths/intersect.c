/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** intersect
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "moon.h"

///////////////////////////////////////////////////////////////////////////////
bool_t intersect2f(v2f_t c1, float r1, v2f_t c2, float r2)
{
    float dist = SQUARE(c1.x - c2.x) +
        SQUARE(c1.y - c2.y);
    float rSum = r1 + r2;

    return (dist <= SQUARE(rSum));
}

///////////////////////////////////////////////////////////////////////////////
bool_t intersect3f(v3f_t c1, float r1, v3f_t c2, float r2)
{
    float dist = SQUARE(c1.x - c2.x) +
        SQUARE(c1.y - c2.y) +
        SQUARE(c1.z - c2.z);
    float rSum = r1 + r2;

    return (dist <= SQUARE(rSum));
}

///////////////////////////////////////////////////////////////////////////////
bool_t intersect2i(v2i_t c1, int r1, v2i_t c2, int r2)
{
    int dist = SQUARE(c1.x - c2.x) +
        SQUARE(c1.y - c2.y);
    int rSum = r1 + r2;

    return (dist <= SQUARE(rSum));
}

///////////////////////////////////////////////////////////////////////////////
bool_t intersectri(recti_t r1, recti_t r2)
{
    int btm1 = r1.top + r1.height;
    int btm2 = r2.top + r2.height;
    int rgt1 = r1.left + r1.width;
    int rgt2 = r2.left + r2.width;
    bool_t overlapX = ((rgt1 > r2.left) && (r1.left < rgt2));
    bool_t overlapY = ((btm1 > r2.top) && (r1.top < btm2));

    return (overlapX && overlapY);
}

///////////////////////////////////////////////////////////////////////////////
bool_t intersectrf(rectf_t r1, rectf_t r2)
{
    float btm1 = r1.top + r1.height;
    float btm2 = r2.top + r2.height;
    float rgt1 = r1.left + r1.width;
    float rgt2 = r2.left + r2.width;
    bool_t overlapX = ((rgt1 > r2.left) && (r1.left < rgt2));
    bool_t overlapY = ((btm1 > r2.top) && (r1.top < btm2));

    return (overlapX && overlapY);
}
