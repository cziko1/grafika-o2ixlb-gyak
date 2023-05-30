#ifndef TRAINTRACK_H
#define TAINTRACK_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "texture.h"

typedef struct Traintrack
{
    Model traintrack;
    GLuint traintrack_texture_id;
} Traintrack;

void init_traintrack(Traintrack* traintrack);
void render_traintrack(Traintrack* traintrack);

#endif /* TRAINTRACK_H*/