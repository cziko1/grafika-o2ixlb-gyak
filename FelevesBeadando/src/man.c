#include "man.h"

void init_man(Man* man)
{
    load_model(&(man->man), "assets/models/man.obj");
    man->man_texture_id = load_texture("assets/textures/man.jpg");
}   

void render_man(Man* man)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, man->man_texture_id);
    glTranslatef( 8, 8, 0.1);
    glScalef(0.1, 0.1, 0.1);
    glRotated(90, 1, 0, 0);
    
    glRotated(-45, 0, 1, 0);

    draw_model(&(man->man));
    glPopMatrix();
}