#include <stdio.h>
#include "brick.h"

int main(int argc, char* argv[]){

    Brick brick;

    double volume;
    double surface;

    set_Brick_data(&brick, 5, 10, 8);
    volume = calc_Brick_volume(&brick);
    surface = calc_Brick_surface(&brick);

    printf("brick volume: %lf\n", volume);
    printf("brick surface: %lf\n", surface);
    
    return 0;
}