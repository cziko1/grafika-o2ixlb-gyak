#ifndef SCENE_H
#define SCENE_H

#include <math.h>
#include <obj/model.h>
#include <obj/load.h>
#include <obj/draw.h>
#include <SDL2/SDL.h>
#include <math.h>

#include "camera.h"
#include "texture.h"
#include "floor.h"
#include "skybox.h"
#include "tunnel.h"
#include "tunnel_end.h"
#include "traintrack.h"
#include "train.h"
#include "door.h"
#include "man.h"
#include "cylinder.h"
#include "lamp.h"
#include "window.h"
#include "view.h"

typedef struct Scene
{
    Material material;
    GLuint texture_id;
	Floor floor;
	GLuint skyBox;
	Tunnel tunnel;
	Tunnel_end tunnel_end;	
	Traintrack traintrack;
	Train train;
	Door door;
	Man man;
	Cylinder cylinder;
	Lamp lamp;
	Window window;
	View view;

	float controlLight[3];
	float brightness;
	int shelp;
} Scene;

/**
 * Initialize the scene by loading models.
 */
void init_scene(Scene* scene);

/**
 * Set the lighting of the scene.
 */
void set_lighting();

/**
 * Set the current material.
 */
void set_material(const Material* material);

/**
 * Update the scene.
 */
void update_scene(Scene* scene, double time);

/**
 * Render the scene objects.
 */
void render_scene(const Scene* scene);

/**
 * Draw the origin of the world coordinate system.
 */
void draw_origin();

void setBrightness(Scene *scene, double brightness);

void shelp(Scene *scene);

#endif /* SCENE_H */
