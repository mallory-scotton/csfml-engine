/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** destroy
*/

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
#include "moon.h"

///////////////////////////////////////////////////////////////////////////////
void destroy_window(void)
{
    if (Win.self) {
        sfRenderWindow_destroy(Win.self);
        Win.self = NULL;
    }
    if (Win.view) {
        sfView_destroy(Win.view);
        Win.view = NULL;
    }
}
