#include "ofApp.h"

// ball related properties
int ballPosX;       // x coordinate of the ball's position
int ballPosY;       // y coordinate of the ball's position
int ballRadius;     // radius of the ball


//--------------------------------------------------------------
void ofApp::setup(){
    
    // initialize ball properties
    ballPosX = 300;
    ballPosY = 200;
    ballRadius = 25;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // set color, apply color "fill" flag for shapes, and draw the ball (circle) at the designated position with the designated radius
    ofSetColor(255, 245, 0);
    ofFill();
    ofCircle(ballPosX, ballPosY, ballRadius);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
