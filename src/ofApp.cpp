#include "ofApp.h"

// ball related properties
int ballPosX;       // x coordinate of the ball's position
int ballPosY;       // y coordinate of the ball's position
int ballRadius;     // radius of the ball
bool ballIsMoving;  // indicates the moving state of the ball

// overall helper values
int movementStep;


//--------------------------------------------------------------
void ofApp::setup(){
    
    // initialize ball properties
    ballPosX = 300;
    ballPosY = 200;
    ballRadius = 25;
    ballIsMoving = false;
    
    // initialize helper values
    movementStep = 4;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // if ball is supposed to move: update it's position
    if (ballIsMoving) {
        
        // calculate new x coordinate of the ball
        ballPosX += movementStep;
        
        // let the ball bounce between the application window's borders
        // if ball's x position (considering its radius) is outside right border OR left border
        if ( (ballPosX > ofGetWindowWidth() - ballRadius) || (ballPosX < 0 + ballRadius) )
        {
            movementStep *= -1;
        }
    }
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
    
    // DEBUG: print out pressed key (code) to the console
    cout << "Pressed key: " << key << endl;
    
    // press spacebar (32): toogle between ball's moving state
    if (key == 32) {
        ballIsMoving = !ballIsMoving;   // toogle moving state back and forth between true and false
    }
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
