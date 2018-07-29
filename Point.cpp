#include "Point.h"

Point::Point(){
    // set x and y to random
    x = rand() % 100;
    y = rand() % 100;
    //set the label to 1 if x < y, -1 otherwise
    if(x < y){
        label = 1;
    } else {
        label = -1;
    }
}

int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}

int Point::getLabel(){
    return label;
}
