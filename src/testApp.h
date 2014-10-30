#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "ofxSyphon.h"

#define PORT 12345
#define NUM_MSG_STRINGS 20

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxOscReceiver receiver;
    
    int black[7];
    int white[10];
    
    
    ofImage keyboard;
    
    ofImage b[7];
    ofImage w[10];
    
    int piandKeyboard;
    
};
