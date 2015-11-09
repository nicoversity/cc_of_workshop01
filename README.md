# Creative coding using openFrameworks - Workshop: An introduction to creative coding using openFrameworks.

**openFrameworks version**: 0.9.0

The purpose of the project is to illustrate and teach some basic drawing and interaction features of the creative coding toolkit [openFrameworks](http://openframeworks.cc). This activity is meant to be held in a workshop-like format and step by step to the participants using live coding, supported by summarizing slides.

Following, a brief overview about the project's content is given in order as they are illustrated during the workshop:

1. Introduction of the *OF base frame* as created with the OF project generator, including OF's *setup()*, *update()* and *draw()* cycle.
2. *Drawing* of a simple (static) ball.
3. Ball *movement* along the x-axis.
4. Implementation of a *bouncing effect*, so the ball stays within the application window.
5. Drawing some *application feedback*, such as FPS, the mouse's position as well as the currently pressed key, directly to the application's window.
6. *Refactoring* of the ball instance's code into a seperate dedicated *class*.
7. *More keyboard input*: Increasing/decreasing the ball's radius.
8. Implementation of the feature to let the ball *follow the mouse's position*, once the mouse *clicked* the ball.
9. Introduction of the *ofRandom()* function in order to randomize the initial position of the ball as well as randomly changing the color of the ball once it was clicked.

In further preparation to this workshop, it is recommended to introduce the workshop participants to the very basics of the C++ programming language. In order to do so, a [brief introduction to C++](https://github.com/nicoversity/cplusplus_intro) has be created accordingly.
