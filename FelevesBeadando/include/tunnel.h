#ifndef TUNNEL_H
#define TUNNEL_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "texture.h"

typedef struct Tunnel
{
    Model tunnel;
    GLuint tunnel_texture_id;
} Tunnel;

void init_tunnel(Tunnel* tunnel);
void render_tunnel(Tunnel* tunnel);

#endif /* TUNNEL_H*/