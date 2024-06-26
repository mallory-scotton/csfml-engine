/*
** EPITECH PROJECT, 2024
** csfml-engine
** File description:
** objects
*/

#ifndef OBJECTS_H_
    #define OBJECTS_H_

///////////////////////////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////////////////////////
    #include "moon.h"

///////////////////////////////////////////////////////////////////////////////
/// \brief Actor class, used to display a creature
///
/// \param self         The creature reference
/// \param sheetId      The current sheet used
/// \param animId       The current animation of the actor
/// \param isVariant    Boolean, if the skin is a variant or original
/// \param variantId    The index of the variant
/// \param position     The position of the actor
/// \param size         The size of the actor
/// \param rotation     The rotation of the actor
///
///////////////////////////////////////////////////////////////////////////////
typedef struct actor_s {
    creature_t *self;
    sfSprite *sprite;
    uint_t sheetId;
    uint_t animId;
    uint_t frame;
    bool_t isVariant;
    uint_t variantId;
    v2f_t position;
    v2f_t scale;
    float rotation;
    bool_t draw;
    ulong_t time;
} actor_t;

///////////////////////////////////////////////////////////////////////////////
/// \brief Object pool to keep track of loaded and drawed assets
///
/// \param actors       The list of actors
/// \param actorCount   The number of actos
///
///////////////////////////////////////////////////////////////////////////////
extern struct pool_s {
    actor_t **actors;
    uint_t actorCount;
} Pool;

///////////////////////////////////////////////////////////////////////////////
/// \brief Create a new actor base on a creature and a position
///
/// \param creature     The reference creature for the actor
/// \param position     The default position of the actor
///
/// \return The newly created actor
///
///////////////////////////////////////////////////////////////////////////////
actor_t *actor_create(creature_t *creature, v2f_t position);

///////////////////////////////////////////////////////////////////////////////
/// \brief Destroy the actor and remove it from the pool
///
/// \param act          The actor to destroy
///
///////////////////////////////////////////////////////////////////////////////
void actor_destroy(actor_t *act);

///////////////////////////////////////////////////////////////////////////////
/// \brief Move the actor base of an offset
///
/// \param act          The actor to move
/// \param offset       Vector2f of the deplacement offset
///
///////////////////////////////////////////////////////////////////////////////
void actor_move(actor_t *act, v2f_t offset);

///////////////////////////////////////////////////////////////////////////////
/// \brief Rotate the actor base of an angle
///
/// \param act          The actor to rotate
/// \param angle        Float angle to add to the actor
///
///////////////////////////////////////////////////////////////////////////////
void actor_rotate(actor_t *act, float angle);

///////////////////////////////////////////////////////////////////////////////
/// \brief Scale an actor base of factors
///
/// \param act          The actor to scale
/// \param factors      Scaling factors applied to the actor
///
///////////////////////////////////////////////////////////////////////////////
void actor_scale(actor_t *act, v2f_t factors);

///////////////////////////////////////////////////////////////////////////////
/// \brief Draw the actor on the screen if need to be drawed, and with the
/// current animation
///
/// \param act          The actor to draw
///
///////////////////////////////////////////////////////////////////////////////
void actor_draw(actor_t *act);

///////////////////////////////////////////////////////////////////////////////
/// \brief Set the actor active sheet using the index of the sheet
///
/// \param act          The focused actor
/// \param id           The index of the wanted sheet
///
/// \return True if the sheet has been updated, false otherwise
///
///////////////////////////////////////////////////////////////////////////////
bool_t actor_set_sheet_id(actor_t *act, uint_t id);

///////////////////////////////////////////////////////////////////////////////
/// \brief Set the actor active sheet using the name of the sheet
///
/// \param act          The focused actor
/// \param name         The name of the wanted sheet
///
/// \return True if the sheet has been updated, false otherwise
///
///////////////////////////////////////////////////////////////////////////////
bool_t actor_set_sheet(actor_t *act, cstring_t name);

///////////////////////////////////////////////////////////////////////////////
/// \brief Set the actor active animation using the index of the animation
///
/// \param act          The focused actor
/// \param id           The index of the wanted animation
///
/// \return True if the animation has been updated, false otherwise
///
///////////////////////////////////////////////////////////////////////////////
bool_t actor_set_anim_id(actor_t *act, uint_t id);

///////////////////////////////////////////////////////////////////////////////
/// \brief Set the actor active animation using the name of the animation
///
/// \param act          The focused actor
/// \param name         The name of the wanted animation
///
/// \return True if the animation has been updated, false otherwise
///
///////////////////////////////////////////////////////////////////////////////
bool_t actor_set_anim(actor_t *act, cstring_t name);

///////////////////////////////////////////////////////////////////////////////
/// \brief Set the actor active varaint using the name or the index of the
/// variant
///
/// \param act          The focused actor
/// \param name         The name of the wanted variant
/// \param id           The index of the wanted variant
///
/// \return True if the variant has been updated, false otherwise
///
///////////////////////////////////////////////////////////////////////////////
bool_t actor_set_variant(actor_t *act, cstring_t name, uint_t id);

#endif /* !OBJECTS_H_ */
