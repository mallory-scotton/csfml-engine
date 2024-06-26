/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** basename
*/


///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
string_t my_basename(cstring_t filename)
{
    string_t p = my_strrchr(filename, '/');

    return (p ? (p + 1) : ((string_t)filename));
}
