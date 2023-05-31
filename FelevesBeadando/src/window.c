#include "window.h"

void init_window(Window* window)
{
    load_model(&(window->window), "assets/models/window.obj");
    window->window_texture_id = load_texture("assets/textures/window.jpg");
}

void render_window(Window* window)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, window->window_texture_id);
    glTranslatef( 0, 10.5, 0.7);
    glScalef(0.3, 0.3, 0.3);
    glRotated(90, 1, 0, 0);
    glRotated(90, 0, 1, 0);

    draw_model(&(window->window));
    glPopMatrix();
}