#include "view.h"

void init_view(View* view)
{
    load_model(&(view->view), "assets/models/view.obj");
    view->view_texture_id = load_texture("assets/textures/view.jpg");
}

void render_view(View* view)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, view->view_texture_id);
    glTranslatef( 0.85, 9.9, 1.58);
    glScalef(0.016, 0.02, 0.029);
    glRotated(180, 1, 0, 0);
    glRotated(90, 0, 1, 0);

    draw_model(&(view->view));
    glPopMatrix();
}