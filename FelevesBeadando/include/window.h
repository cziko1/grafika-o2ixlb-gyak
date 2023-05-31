#ifndef WINDOW_H
#define WINDOW_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "texture.h"

typedef struct Window
{
    Model window;
    GLuint window_texture_id;
} Window;

void init_window(Window* window);
void render_window(Window* window);

#endif /* WINDOW_H */O