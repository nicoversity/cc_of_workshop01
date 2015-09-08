#include "ofApp.h"

// ball related properties
int ballPosX;       // x coordinate of the ball's position
int ballPosY;       // y coordinate of the ball's position
int ballRadius;     // radius of the ball
bool ballIsMoving;  // indicates the moving state of the ball

// overall helper values
int movementStep;   // indicates the ball's movement step per update cycle
int pressedKey;     // store the key (code) of the most recent pressed key of the keyboard
bool keyIsPressed;  // indicates, if currently a key is pressed


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
    
    // draw some application feedback
    //
    
    // set color: OF pink
    ofSetColor(236, 50, 135);
    
    // draw the framerate (FPS, "frames per second")
    ofDrawBitmapString(ofToString(ofGetFrameRate()) + "fps", 10, 15);
    
    // draw the mouse pointer's position
    ofDrawBitmapString("Mouse x|y: " + ofToString(mouseX) + "|" + ofToString(mouseY), 110, 15);

    // draw the pressed key (code), but only if a key is pressed
    if (keyIsPressed) {
        ofDrawBitmapString("Key: " + ofToString(pressedKey), 280, 15);
    }
    
    
    // draw application's (interactive) content
    //
    
    // set color, apply color "fill" flag for shapes, and draw the ball (circle) at the designated position with the designated radius
    ofSetColor(255, 245, 0);
    ofFill();
    ofCircle(ballPosX, ballPosY, ballRadius);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    // DEBUG: print out pressed key (code) to the console
    //cout << "Pressed key: " << key << endl;
    
    // update key-related helper values
    pressedKey = key;
    keyIsPressed = true;
    
    // press spacebar (32): toogle between ball's moving state
    if (key == 32) {
        ballIsMoving = !ballIsMoving;   // toogle moving state back and forth between true and false
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    // update key-related helper value
    keyIsPressed = false;
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
