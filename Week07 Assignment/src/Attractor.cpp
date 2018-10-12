//
//  Attractor.cpp
//  Week07 Assignment
//
//  Created by Ruobing Cai on 2018/10/11.
//

#include "Attractor.hpp"

void Attractor::init(ofPoint _pos, float _radius, float _angle, float _vel, int _color){
    pos = _pos;
    radius = _radius;
    angle = _angle;
    vel = _vel;
    color = _color;
}

void Attractor::update(float _updatedRadius){
    radius = _updatedRadius;
    float x = radius * cos(angle);
    float y = radius * sin(angle);
    angle += vel;
    pos.set(ofGetWindowWidth()/2 + x, ofGetWindowHeight()/2 + y);
}

void Attractor::draw(){
    ofSetHexColor(color);
    ofDrawCircle(pos, 2);
}
