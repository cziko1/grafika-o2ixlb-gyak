#ifndef SCENE_H
#define SCENE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <GL/gl.h>
#include <obj/load.h>
#include <obj/draw.h>

#include "camera.h"

#include <math.h>

#include <obj/model.h>


typedef struct Scene
{
    Material material;
    GLuint texture_id;
	
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