#ifndef CYLINDER_H
#define CYLINDER_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "texture.h"

typedef struct Cylinder
{
    Model cylinder;
    GLuint cylinder_texture_id;
} Cylinder;

void init_cylinder(Cylinder* cylinder);
void render_cylinder(Cylinder* cylinder);

#endif /* CYLINDER_H */