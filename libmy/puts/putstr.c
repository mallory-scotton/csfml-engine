/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** putstr
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
void my_putstr(cstring_t str)
{
    write(1, str, my_strlen(str));
}
