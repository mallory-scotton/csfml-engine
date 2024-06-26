/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** isdir
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "my.h"

///////////////////////////////////////////////////////////////////////////////
bool_t my_isdir(cstring_t path)
{
    struct stat info;

    if (stat(path, &info) != 0)
        return (false);
    return (S_ISDIR(info.st_mode));
}
