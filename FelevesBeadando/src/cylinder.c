#include "cylinder.h"

void init_cylinder(Cylinder* cylinder)
{
    load_model(&(cylinder->cylinder), "assets/models/cylinder.obj");
    cylinder->cylinder_texture_id = load_texture("assets/textures/cylinder.jpg");
}   

void render_cylinder(Cylinder* cylinder)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, cylinder->cylinder_texture_id);
    glTranslatef( 8, 8, 0.1);
    glScalef(0.1, 0.1, 0.1);
    glRotated(90, 1, 0, 0);
    draw_model(&(cylinder->cylinder));
    glPopMatrix();
}