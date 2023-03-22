#ifndef Brick_H
#define Brick_H


typedef struct Brick{
    double w;
    double h;
    double l;
}Brick;

//set the data of the Brick

void set_Brick_data(Brick* Brick, double w, double h, double l);

//calculate the area of the brick!

double calc_Brick_volume(const Brick* Brick);
double calc_Brick_surface(const Brick* Brick);
#endif // Brick_H