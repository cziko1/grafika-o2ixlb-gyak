
#include "brick.h"

#include <math.h>

void set_Brick_data(Brick* brick, double w, double h, double l){
    brick->w = w;
    brick->h = h;
    brick->l = l;
}
double calc_Brick_volume(const Brick* brick){
    double volume = brick->w * brick->h * brick->l;
    return volume;
}

double calc_Brick_surface(const Brick* brick){
    double surface = 2 * (brick->w*brick->h + brick->w*brick->l +brick->h*brick->l);
    return surface;
}