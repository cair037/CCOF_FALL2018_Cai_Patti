#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofBackground(0);
    ofEnableSmoothing();
    ofSetCircleResolution(60);
    
    ofSetBackgroundAuto(false);
    
    radius = 10;
    for(int i  = 0; i < SEGMENT; i++){
        float angle = ofDegToRad(13) * i;
        
        float x = radius * cos(3*angle);
        float y = radius * sin(3*angle);
        
        Attractor a;
        a.init(ofPoint(ofGetWindowWidth()/2 + x,ofGetWindowHeight()/2 + y),  radius, angle, 0.01, ofRandom(0x0011ff, 0x22eeff));
        attractors.push_back(a);
    }
    
    rPct = 0;
    rPctVel = .01;
    rMin = 0;
    rMax = 150;
}

//--------------------------------------------------------------
void ofApp::update(){
    
  
    rPct += rPctVel;
    float rPctOut = sin(2 * rPct);
    radius = ofMap(rPctOut, 0, 1.5, rMin, rMax);
    
    for(int i  = 0; i < SEGMENT; i++){
        attractors[i].update(radius + .5*i);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushStyle();
    ofSetBackgroundAuto(false);
    
    glBlendFunc(GL_ONE, GL_ONE);
    glBlendEquation(GL_FUNC_REVERSE_SUBTRACT);
    ofSetColor(1.5);
    ofFill();
    ofDrawRectangle(0,0, ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    ofDrawCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 400);
    ofDrawRectangle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 400,400);
   
  
    
    ofPopStyle();
    for(int i  = 0; i < SEGMENT; i++){
        attractors[i].draw();
        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

