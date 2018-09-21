#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    
    origin = ofPoint(ofGetWindowWidth()/2,ofGetWindowHeight()/2);
    origin2= ofPoint(ofGetWindowWidth(),ofGetWindowHeight());
    origin3= ofPoint(0,ofGetWindowHeight());
    
    
    inputPct = ofGetWindowWidth();
    
}

//--------------------------------------------------------------
void ofApp::update(){
   
    inputPct += 0.05;
    if(inputPct > 5) inputPct = 0;
    
   
    float outputPct = powf(inputPct,3);
    objectPos = (1-outputPct) * origin + outputPct * dest;
    objectPos2 =-2*((1-outputPct) * origin + outputPct * dest);
}

//--------------------------------------------------------------
void ofApp::draw(){
  
    
    ofBackground(180,256,89,5);
    
    
    
    for(int i = 0; i<15; i++){
        
        for (int j = 0; j < 20; j++){
            if (int j = 10; false);
            ofPushMatrix();
            
            
            ofTranslate( 30+i * 200, 30+j * 50);
            
            
            
            
            
            
            float y = y/2+ ofRandom(-20,20);
            
            ofFill();
            ofSetColor( 232, 247, 144, 30);
            ofDrawCircle(y/50, x*30*(x-30), 15);
            
            
            
            ofFill();
            ofSetColor( 232, 247, 144, 60);
            ofDrawCircle(y/50, x*30*(x-20), ofGetWindowHeight()/(5*inputPct-y/2)/30);
            
            
            
            
            
            float x = x/2+ ofRandom(-20,20);
            
            
            
            ofFill();
            ofSetColor( 255, 255, 255, 30);
            ofDrawCircle(x*3*(x-80), y/5, ofGetWindowHeight()/inputPct/3/50);
            
           
        
            
            
            
            ofPopMatrix();
            
        }
        
        
        
        
        
        
        
        
        
        
    }
    
 
    
}


