#ifndef LAMP_H
#define LAMP_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "texture.h"

typedef struct llmp
{
    Model lamp;
    GLuint lamp_texture_id;
} Lamp;

void init_lamp(Lamp* lamp);
void render_lamp(Lamp* lamp);

#endif /* LAMP_H */