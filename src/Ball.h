#ifndef ball_h
#define ball_h

#include "ofMain.h"

class Ball {
public:
    
    // public properties
    //
    
    int x;          // x coordinate of the ball's position
    int y;          // y coordinate of the ball's position
    int radius;     // radius of the ball
    bool isMoving;  // indicates the moving state of the ball
    
    // public functions
    //
    
    Ball(); // "constructor", special function to create an object/instance of the class "Ball"
    
    void draw();                                // draw the ball
    void moveTo(int xDestiny, int yDestiny);    // update position
};

#endif