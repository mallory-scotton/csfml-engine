/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
    #include "rpg.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief
///
///////////////////////////////////////////////////////////////////////////////
typedef enum weapon_type_e {
    weaponLaser,
    weaponArrow,
    weaponBullet,
    weaponMelee,
    weaponExplosive,
    WEAPON_TYPE_COUNT
} weapon_type_t;

///////////////////////////////////////////////////////////////////////////////
/// \brief
///
/// \param sender
/// \param origin
/// \param destination
/// TODO: Add
///
///////////////////////////////////////////////////////////////////////////////
typedef struct bullet_s {
    uint_t sender;
    v2f_t origin;
    v2f_t destination;
} bullet_t;

///////////////////////////////////////////////////////////////////////////////
/// \brief
///
/// \param type
/// \param ammos
/// \param damage
/// \param firerate
///
///////////////////////////////////////////////////////////////////////////////
typedef struct weapon_s {
    weapon_type_t type;
    uint_t ammos;
    uint_t damage;
    float firerate;
} weapon_t;

///////////////////////////////////////////////////////////////////////////////
/// \brief
///
///////////////////////////////////////////////////////////////////////////////
extern struct player_s {
    actor_t *ref;
    v2f_t velocity;
} Player;

///////////////////////////////////////////////////////////////////////////////
/// \brief
///
/// \param evt
///
///////////////////////////////////////////////////////////////////////////////
void game_loop(void);

#endif /* !GAME_H_ */
