#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(ofRandom(220));
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
    ofSetBackgroundAuto(false);

   
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //time
    float t= ofGetElapsedTimef();
    float noiseOutput= ofNoise(t);
    
    radius=ofMap(noiseOutput, 0, 1, 300, 300);
    

    
    
    
    //    radius=noiseOutput;
    //
    
    //    radius=ofRandom(-20,20);
    
   
    
   
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

  
    
   
    for(int i = 0;  i<20;i++){

        
        for (int a = 0; a<20;  a++){
            
            
            ofPushMatrix();
            
            
            ofTranslate( i * 400, a * 300);
            
            
            
            
            ofDrawCircle( 5, 5, cos(tan(sin(ofRandom(3))*2))*radius);
            ofNoFill();
            ofSetColor(ofRandom(30),ofRandom(150),ofRandom(150),ofRandom(40));
            
            ofDrawCircle(cos(t), cos(t), 10);
            ofNoFill();
            ofSetColor(ofRandom(30),ofRandom(150),ofRandom(150),60);
            
            
            
            
            ofPopMatrix();
        }
        
        
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
   
}

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

