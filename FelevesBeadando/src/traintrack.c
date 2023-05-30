#include "traintrack.h"

void init_traintrack(Traintrack* traintrack)
{
    load_model(&(traintrack->traintrack), "assets/models/train_track.obj");
    traintrack->traintrack_texture_id = load_texture("assets/textures/train_track.jpg");
}
void render_traintrack(Traintrack* traintrack)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, traintrack->traintrack_texture_id);
    glTranslatef( -5, 5, 0.1);
    glScalef(1.0, 0.7, 0.5);
    glRotated(90, 1, 0, 0);
    
    draw_model(&(traintrack->traintrack));
    glPopMatrix();
}