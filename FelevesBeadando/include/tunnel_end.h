#ifndef TUNNEL_END_H
#define TUNNEL_END_H

#include <obj/model.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "texture.h"

typedef struct Tunnel_end
{
    Model tunnel_end;
    GLuint tunnel_end_texture_id;
} Tunnel_end;

void init_tunnel_end(Tunnel_end* tunnel_end);
void render_tunnel_end(Tunnel_end* tunnel_end);

#endif /* TUNNEL_END_H*/