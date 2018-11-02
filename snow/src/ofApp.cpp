#include "ofApp.h"

void ofApp::setup(){
    ofSetWindowShape(1000,768);
    ofBackground(180, 180, 180);
    for(int i = 0; i < 1000; i++){
        int x = ofRandom(ofGetWindowWidth());
        int y = ofRandom(ofGetWindowHeight());
        posX.push_back(x);
        ofPoint p = ofPoint(x,y);
        snow.push_back(p);
    }
}
void ofApp::update(){
    
        for(int i = 0; i < snow.size(); i++){
            if(snow[i].y<ofGetWindowHeight()){
                snow[i].y += ofRandom(1,4);
//                snow[i].x = 2 * ofMap(ofNoise((ofGetFrameNum()+posX[i])/100.0),0,1,0,ofGetWindowWidth())-ofGetWindowWidth()/2.2;
            }
        }
    
}
void ofApp::draw(){
    for(int i = 0; i < snow.size(); i++){
        ofPushMatrix();
        ofTranslate(snow[i]);
        
        if(rotateMode == 0){
            ofRotateX(ofGetElapsedTimef() * 50);
        }else if(rotateMode == 1){
            ofRotateY(ofGetElapsedTimef() * 50);
        }else{
            ofRotateZ(ofGetElapsedTimef() * 50);
        }
        
        ofNoFill();
        ofSetLineWidth(1);
        ofDrawBox(50);
        
        
        
        ofPopMatrix();
    }
    for(int i = 0; i < snow.size()/60; i++){
        ofPushMatrix();
        ofTranslate(snow[i]);
        
        if(rotateMode == 0){
            ofRotateX(ofGetElapsedTimef() * 50);
        }else if(rotateMode == 1){
            ofRotateY(ofGetElapsedTimef() * 50);
        }else{
            ofRotateZ(ofGetElapsedTimef() * 50);
        }
        
        ofNoFill();
        ofSetLineWidth(0.003);
        ofDrawSphere(80);
        
        
        
        ofPopMatrix();
    }
    
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 't'){
    ofSetColor(ofColor::fromHsb(int(ofGetElapsedTimef() * 50) % 120,20,120));
        ; // do sth
        for(int i = 0; i < snow.size(); i++){
            int x = ofRandom(ofGetWindowWidth());
            int y = ofRandom(ofGetWindowHeight());
            posX[i] = x;
            snow[i].set(x,y);
            
        }
    }
    
}

void ofApp::mousePressed(int x, int y, int button){

}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 't'){
    rotateMode++;
    if(rotateMode == 3){
        rotateMode = 0;
    }
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}


