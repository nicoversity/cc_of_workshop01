/*
 * Ball.h
 *
 * Project: Creative coding using openFrameworks - Workshop: An introduction to creative coding using openFrameworks
 *
 * Author: Nico Reski
 * Web: http://reski.nicoversity.com
 * Twitter: @nicoversity
 */

#ifndef ball_h
#define ball_h

#include "ofMain.h"

class Ball {
public:
    
    // public properties
    //
    
    int x;              // x coordinate of the ball's position
    int y;              // y coordinate of the ball's position
    int radius;         // radius of the ball
    ofColor color;      // represents the ball's color
    bool isMoving;      // indicates the moving state of the ball
    bool isFollowing;   // indicates if the ball is currently following the mouse
    
    // public functions
    //
    
    Ball(); // "constructor", special function to create an object/instance of the class "Ball"
    
    void draw();                                // draw the ball
    void moveTo(int xDestiny, int yDestiny);    // update position
    void applyRandomColor();                    // changes the ball's color randomly
};

#endif