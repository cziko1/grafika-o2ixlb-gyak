#include "lamp.h"

void init_lamp(Lamp* lamp)
{
    load_model(&(lamp->lamp), "assets/models/lamp.obj");
    lamp->lamp_texture_id = load_texture("assets/textures/lamp.jpg");
}   

void render_lamp(Lamp* lamp)
{
    static float angle = 0.0f; 

    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, lamp->lamp_texture_id);
    glTranslatef( 0, 0, 5);
    glScalef(0.05, 0.05, 0.05);
    glRotated(90, 1, 0, 0);
    glRotated(angle, 0, 1, 0);  
    draw_model(&(lamp->lamp));
    glPopMatrix();

	angle += 15.0f;
}