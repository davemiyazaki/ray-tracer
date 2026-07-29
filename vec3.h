#ifndef VEC3H
#define VEC3H

#include <math.h>
#include <stdlib.h> 
#include <iostream>

class vec3{

    public:
    vec3(){}
    vec3(float e0, float e1, float e2){e[0] = e0; e[1] = e1; e[2] = e2; }
    
    float e[3];
};
