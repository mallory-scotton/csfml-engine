/*
** EPITECH PROJECT, 2024
** amazed
** File description:
** strtok
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
string_t my_strtok(string_t str, cstring_t delim)
{
    static string_t save;

    return (my_strtok_r(str, delim, &save));
}
