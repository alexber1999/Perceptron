#ifndef Point_H
#define Point_H
#include <stdlib.h>
#include <iostream>
class Point{
    private:
        double x;
        double y;
        int label;
    
    public:
        Point();
        int getX();
        int getY();
        int getLabel();
    
    
};
#endif
