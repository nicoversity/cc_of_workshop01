#include "Ball.h"

Ball::Ball()
{
    x = 300;                // initial x position of the ball
    y = 200;                // initial y position of the ball
    radius = 25;            // initial radius of the ball
    isMoving = false;       // initial moving state
    isFollowing = false;    // initial following state
}


void Ball::draw()
{
    // set color, apply color "fill" flag for shapes, and draw the ball (circle) at the designated position with the designated radius
    ofSetColor(255, 245, 0);
    ofFill();
    ofCircle(x, y, radius);
}


void Ball::moveTo(int xDestiny, int yDestiny){
    
    // update ball position
    x = xDestiny;
    y = yDestiny;
}