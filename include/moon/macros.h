/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** macros
*/

#ifndef MACROS_H_
    #define MACROS_H_

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
    #include "moon.h"
    #include "my.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Convert any vector to a sfVector2i
///
/// \param v            The vector to convert
///
/// \return The converted vector
///
///////////////////////////////////////////////////////////////////////////////
    #define CV2I(v) ((v2i_t){(int)v.x, (int)v.y})

///////////////////////////////////////////////////////////////////////////////
/// \brief Convert any vector to a sfVector2f
///
/// \param v            The vector to convert
///
/// \return The converted vector
///
///////////////////////////////////////////////////////////////////////////////
    #define CV2F(v) ((v2f_t){(float)v.x, (float)v.y})

///////////////////////////////////////////////////////////////////////////////
/// \brief Shortener for 'mapCoordsToPixel', convert the map coordinate system
/// to the screen coordinate
///
/// \param v            The point to convert
///
/// \return The converted point on the screen
///
///////////////////////////////////////////////////////////////////////////////
    #define MAP_TO_PX(v) sfRenderWindow_mapCoordsToPixel(Win.self, v, Win.view)

///////////////////////////////////////////////////////////////////////////////
/// \brief Shortener for 'mapPixelToCoords', convert screen system to world
/// coordinate system
///
/// \param v            The point to convert
///
/// \return The converted point on the world
///
///////////////////////////////////////////////////////////////////////////////
    #define PX_TO_MAP(v) sfRenderWindow_mapPixelToCoords(Win.self, v, Win.view)

///////////////////////////////////////////////////////////////////////////////
/// \brief Shortener for 'mapCoordsToPixel', convert the map coordinate system
/// to the screen coordinate and return an sfVector2f
///
/// \param v            The point to convert
///
/// \return The converted point on the screen and return an sfVector2f
///
///////////////////////////////////////////////////////////////////////////////
    #define MAP_TO_PXF(v) CV2F(MAP_TO_PX(CV2F(v)))

///////////////////////////////////////////////////////////////////////////////
/// \brief Shortener for 'mapPixelToCoords', convert screen system to world
/// coordinate system and return an sfVector2f
///
/// \param v            The point to convert
///
/// \return The converted point on the world
///
///////////////////////////////////////////////////////////////////////////////
    #define PX_TO_MAPF(v) CV2F(PX_TO_MAP(CV2I(v)))

///////////////////////////////////////////////////////////////////////////////
/// \brief Calculates the cube of a number.
///
/// \param x            The input value.
///
/// \return The cube of x.
///
///////////////////////////////////////////////////////////////////////////////
    #define CUBE(x) ((x) * (x) * (x))

///////////////////////////////////////////////////////////////////////////////
/// \brief Calculates the square of a number.
///
/// \param x            The input value.
///
/// \return The square of x.
///
///////////////////////////////////////////////////////////////////////////////
    #define SQUARE(x) ((x) * (x))

///////////////////////////////////////////////////////////////////////////////
/// \brief Macro to calculate the midpoint between two values.
///
/// \param x            The first value
/// \param y            The second value
///
/// \return The midpoint between the two input values
///
///////////////////////////////////////////////////////////////////////////////
    #define MID(x, y) ((x - y) / 2)

///////////////////////////////////////////////////////////////////////////////
/// \brief Transform an integer into a boolean
///
/// \param x            The value to transfrom
///
/// \return The booleanify value
///
///////////////////////////////////////////////////////////////////////////////
    #define BOOL(x) ((x) ? true : false)

///////////////////////////////////////////////////////////////////////////////
/// \brief Compare two strings together
///
/// \param str1         The first string
/// \param str2         The second string
///
/// \return True if the two string are equal, false otherwise
///
///////////////////////////////////////////////////////////////////////////////
    #define CMP(str1, str2) (!my_strcmp(str1, str2))

///////////////////////////////////////////////////////////////////////////////
/// \brief Orealloc shortener
///
/// \param ptr          The pointer to realloc
/// \param size         Size of one object
/// \param n            New number of object
///
/// \return The newly alloced ptr
///
///////////////////////////////////////////////////////////////////////////////
    #define REALLOC(ptr, size, n) (my_orealloc(ptr, size * (n - 1), size * n))

#endif /* !MACROS_H_ */
