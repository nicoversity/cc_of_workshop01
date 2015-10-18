/*
 * ofApp.cpp
 *
 * Project: Creative coding using openFrameworks - Workshop: An introduction to creative coding using openFrameworks
 *
 * Author: Nico Reski
 * Web: http://reski.nicoversity.com
 * Twitter: @nicoversity
 */

#include "ofApp.h"

// overall helper values
int movementStep;   // indicates the ball's movement step per update cycle
int radiusStep;     // indicates the step for decreasing/increasing the ball's radius
int pressedKey;     // store the key (code) of the most recent pressed key of the keyboard
bool keyIsPressed;  // indicates, if currently a key is pressed


//--------------------------------------------------------------
void ofApp::setup(){
    
    // initialize helper values
    movementStep = 4;
    radiusStep = 5;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // if ball is supposed to move: update it's position
    if (ball.isMoving) {
        
        // calculate new x coordinate of the ball
        int newXPos = ball.x += movementStep;
        
        // move the ball
        ball.moveTo(newXPos, ball.y);
        
        // let the ball bounce between the application window's borders
        // if ball's x position (considering its radius) is outside right border OR left border
        if ( (ball.x > ofGetWindowWidth() - ball.radius) || (ball.x < 0 + ball.radius) )
        {
            // reverse movement direction
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
    
    // draw the ball instance
    ball.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    // DEBUG: print out pressed key (code) to the console
    //cout << "Pressed key: " << key << endl;
    
    // update key-related helper values
    pressedKey = key;
    keyIsPressed = true;
    
    // press spacebar (key code == 32): toggle between ball's moving state
    if (key == 32) {
        if (!ball.isFollowing) ball.isMoving = !ball.isMoving;   // toggle moving state back and forth between true and false, in case the ball is currently not following the mouse
    }
    
    // alternative keyboard input handler: using "switch" instead of "if"
    // increase/decrease the ball's radius by pressing 'w' or 's' on the keyboard
    // Note: int key can be represented as char character via type cast
    switch (key) {
        case 'w':
            ball.radius += radiusStep;
            break;
        case 's':
            ball.radius -= radiusStep;
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    // update key-related helper value
    keyIsPressed = false;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
    // move ball to mouse pointer's position
    if (ball.isFollowing) {
        ball.moveTo(x, y);
    }
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    // only toggle mouse following state if the ball is currently not moving
    if (!ball.isMoving) {
        
        // calculate distance between mouse click and ball
        float distance = ofDist(ball.x, ball.y, x, y);
        
        // if distance is less than the ball's radius: clicked inside the ball
        if (distance < ball.radius) {
            
            // toggle between mouse following state
            ball.isFollowing = !ball.isFollowing;
            
            // change ball's color
            ball.applyRandomColor();
        }
    }
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
