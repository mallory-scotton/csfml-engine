/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** islower
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
bool_t my_islower(int ch)
{
    return (BOOL(ch >= 'a' && ch <= 'z'));
}
