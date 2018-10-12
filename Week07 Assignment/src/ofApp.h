#pragma once

#include "ofMain.h"
#include "Attractor.hpp"

#define SEGMENT 600

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    
    vector<Attractor> attractors;
    float radius;
    float rPct, rPctVel;
    
    float rMin, rMax;

    
};

