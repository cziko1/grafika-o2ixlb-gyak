#include "tunnel_end.h"

void init_tunnel_end(Tunnel_end* tunnel_end)
{
    load_model(&(tunnel_end->tunnel_end), "assets/models/tunnel.obj");
    tunnel_end->tunnel_end_texture_id = load_texture("assets/textures/tunnel.jpg");
}

void render_tunnel_end(Tunnel_end* tunnel_end)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, tunnel_end->tunnel_end_texture_id);
    glTranslatef( -5, -10, 0);
	glScalef(0.053, 0.013, 0.013);
	glRotated(270, 1, 0, 0);
    draw_model(&(tunnel_end->tunnel_end));
    glPopMatrix();
}