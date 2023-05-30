#include "scene.h"
#include "app.h"

void init_scene(Scene* scene)
{
	init_floor(&(scene->floor));

    scene->material.ambient.red = 1.0;
    scene->material.ambient.green = 1.0;
    scene->material.ambient.blue = 1.0;

    scene->material.diffuse.red = 1.0;
    scene->material.diffuse.green = 1.0;
    scene->material.diffuse.blue = 1.0;

    scene->material.specular.red = 1.0;
    scene->material.specular.green = 1.0;
    scene->material.specular.blue = 1.0;

    scene->material.shininess = 0.0;
	
	scene->brightness = 0.0f;
	
	scene->controlLight[0] = 1.0f;
    scene->controlLight[1] = 1.0f;
    scene->controlLight[2] = 1.0f;
	
}

void set_lighting(Scene* scene)
{
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    float ambient_light[] = { scene->controlLight[0], scene->controlLight[1], scene->controlLight[0], 1.0 }; 
    float diffuse_light[] = { scene->controlLight[0], scene->controlLight[1], scene->controlLight[0], 1.0f }; 
    float specular_light[] = { scene->controlLight[0], scene->controlLight[1], scene->controlLight[0], 1.0f }; 
    
    float position[] = { 0.0f, 1.0f, 0.0f, 0.0f }; 

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient_light);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular_light);
    glLightfv(GL_LIGHT0, GL_POSITION, position);
}

void set_material(const Material* material)
{
    float ambient_material_color[] = {
        material->ambient.red,
        material->ambient.green,
        material->ambient.blue
    };

    float diffuse_material_color[] = {
        material->diffuse.red,
        material->diffuse.green,
        material->diffuse.blue
    };

    float specular_material_color[] = {
        material->specular.red,
        material->specular.green,
        material->specular.blue
    };

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient_material_color);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diffuse_material_color);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular_material_color);

    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, &(material->shininess));
}

void update_scene(Scene* scene, double time)
{
	scene->controlLight[0] += scene->brightness * time;
    scene->controlLight[1] += scene->brightness * time;
    scene->controlLight[2] += scene->brightness * time;
    scene->controlLight[3] += scene->brightness * time;
}

void render_scene(const Scene* scene)
{
    set_material(&(scene->material));
    set_lighting(scene);
	render_floor(&(scene->floor));
	
    glEnd();
}

void setBrightness(Scene *scene, double brightness) {
    scene->brightness = brightness;
}
