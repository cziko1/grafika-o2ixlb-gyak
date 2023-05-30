#include "train.h"

void init_train(Train* train)
{
    load_model(&(train->train), "assets/models/Thomas.obj");
    train->train_texture_id = load_texture("assets/textures/train.jpg");
}   

void render_train(Train* train)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, train->train_texture_id);
    glTranslatef( -5, 5, 0.1);
    glScalef(1.0, 0.7, 0.5);
    glRotated(90, 1, 0, 0);
    
    draw_model(&(train->train));
    glPopMatrix();
}