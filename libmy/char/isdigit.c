/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** isdigit
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
bool_t my_isdigit(int ch)
{
    return (BOOL(ch >= '0' && ch <= '9'));
}
