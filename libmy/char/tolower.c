/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** tolower
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
int my_tolower(int ch)
{
    return (my_islower(ch) ? (ch + 32) : ch);
}