#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    
    ofPoint origin;
    ofPoint dest;
    ofPoint objectPos;
    ofPoint objectPos2;
    ofPoint origin2;
    ofPoint origin3;
    
    //the x axis of math graph
    float inputPct;
    float outputPct;
    float x;
    float y;
    float mouseMove;
};


