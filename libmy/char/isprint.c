/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** isprint
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
bool_t my_isprint(int ch)
{
    return (BOOL(ch >= ' ' && ch <= '~'));
}
