#ifndef FLOOR_H
#define FLOOR_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>

#include "texture.h"

typedef struct Floor
{
    Model floor;
    GLuint floor_texture_id;
} Floor;

void init_floor(Floor* floor);
void render_floor(Floor* floor);

#endif