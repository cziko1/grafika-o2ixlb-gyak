#include "floor.h"

void init_floor(Floor* floor)
{
    load_model(&(floor->floor), "assets/models/floor.obj");
    floor->floor_texture_id = load_texture("assets/textures/floor.jpg");
}

void render_floor(Floor* floor)
{
    // Floor
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, floor->floor_texture_id);
    glScalef(0.3, 0.3, 0.3);
    glRotated(90, 1, 0, 0);
    glTranslatef(0, 0, 0);
    draw_model(&(floor->floor));
    glPopMatrix();
}