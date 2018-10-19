#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
//    for(int i = 0; i<TOTALNUM; i++){
//        Particle p;
        ball.setup();
//        particles.push_back(p);
//    }
    springTail.set(ball.loc);
    springHead.set(ball.loc.x, 0);
    liquid.setup(0, 0, ofGetWindowWidth(), ofGetWindowHeight(), 0.005);
    equal.set(ball.loc);
    constant = 0.0009;
    
//    friction = 0.008;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
//    ofPoint wind;
//    wind.set(0.01, 0);
    
//    for(int i = 0; i<TOTALNUM; i++){
//        particles[i].applyForce(wind);
        ball.addGravityForce(0.4);
    
        if(ball.insideWater(liquid)){
            ball.addDragForce(liquid);
        }
    ofPoint springForce;
    springForce = constant * (equal - ball.loc);
    ball.applyForce(springForce);
        ball.update();
    
    springTail.set(ball.loc);
    
  
    
//    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    for(int i = 0; i<TOTALNUM; i++){
        ball.draw();
//    }
    ofDrawLine(springHead,springTail);
    
    liquid.draw();
}
