#ifndef TRAIN_H
#define TRAIN_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "texture.h"

typedef struct Train
{
    Model train;
    GLuint train_texture_id;
} Train;

void init_train(Train* train);
void render_train(Train* train);

#endif /* TRAIN_H */