#ifndef VIEW_H
#define VIEW_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "texture.h"

typedef struct View
{
    Model view;
    GLuint view_texture_id;
} View;

void init_view(View* view);
void render_view(View* view);

#endif /* VIEW_H */