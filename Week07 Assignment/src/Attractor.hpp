//
//  Attractor.hpp
//  Week07 Assignment
//
//  Created by Ruobing Cai on 2018/10/11.
//

#ifndef Attractor_hpp
#define Attractor_hpp

#include <stdio.h>

class Attractor{
public:
    void init(ofPoint _pos, float _radius, float _angle, float _vel, int _color);
    void update(float _updatedRadius);
    void draw();
    
    int color;
    ofPoint pos;
    float radius, angle, vel;
};

#endif /* Attractor_hpp */
