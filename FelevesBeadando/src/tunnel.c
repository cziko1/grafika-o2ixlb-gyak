#include "tunnel.h"

void init_tunnel(Tunnel* tunnel)
{
    load_model(&(tunnel->tunnel), "assets/models/tunnel.obj");
    tunnel->tunnel_texture_id = load_texture("assets/textures/tunnel.jpg");
}

void render_tunnel(Tunnel* tunnel)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, tunnel->tunnel_texture_id);
    glTranslatef( -5, 10, 0);
	glScalef(0.053, 0.013, 0.013);
	glRotated(270, 1, 0, 0);
    draw_model(&(tunnel->tunnel));
    glPopMatrix();
}