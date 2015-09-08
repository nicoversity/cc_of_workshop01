#include "Ball.h"

Ball::Ball()
{
    x = ofRandom(ofGetWindowWidth());   // initial x position of the ball
    y = ofRandom(ofGetWindowHeight());  // initial y position of the ball
    radius = ofRandom(10, 50);          // initial radius of the ball
    applyRandomColor();                 // initial color (randomly)
    isMoving = false;                   // initial moving state
    isFollowing = false;                // initial following state
}


void Ball::draw()
{
    // set color, apply color "fill" flag for shapes, and draw the ball (circle) at the designated position with the designated radius
    ofSetColor(color);
    ofFill();
    ofCircle(x, y, radius);
}


void Ball::moveTo(int xDestiny, int yDestiny)
{
    // update ball position
    x = xDestiny;
    y = yDestiny;
}


void Ball::applyRandomColor()
{
    // set RGB color randomly
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}