#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    // seting up port
    receiver.setup(PORT);
    
    //image load
    keyboard.loadImage("piano.jpg");
    
    
    for (int i=0;i<7;i++){
        b[i].loadImage("b0"+ofToString(i)+ ".png");
    }
    
    for (int i=0;i<10;i++){
        w[i].loadImage("w0"+ofToString(i)+ ".png");
    }
    
    // initializing array
    for (int i =0;i<7;i++){
        black[i]=99;
    }
    
    for (int i=0;i<10;i++){
        white[i]=99;
    }
}

//--------------------------------------------------------------
void testApp::update(){
    while(receiver.hasWaitingMessages()){
        
        
        // get the next message
        ofxOscMessage m;
        receiver.getNextMessage(&m);
        // check for black
        if(m.getAddress() == "/piano"){
            // the arguments are int32's
            piandKeyboard=m.getArgAsInt32(0);
        }
        
        
        
        //            // get the next message
        //            ofxOscMessage m;
        //            receiver.getNextMessage(&m);
        //            // check for black
        //            if(m.getAddress() == "/key/black"){
        //                // the arguments are int32's
        //                for (int i =0;i<7;i++){
        //                    black[i]=m.getArgAsInt32(i);
        //                }
        //            }
        //        ofxOscMessage m1;
        //        receiver.getNextMessage(&m1);
        //            // check for white
        //           if(m1.getAddress() == "/key/white"){
        //                // the arguments are int32's
        //                for (int i =0;i<10;i++){
        //                    white[i]=m1.getArgAsInt32(i);
        //                }
        //            }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255 );
    keyboard.draw(0,0);
    
    //    for (int i=0; i<7; i++) {
    //        if (black[i] ==1)
    //            b[i].draw(0,0);
    //    }
    //
    //    for (int i=0; i<10; i++) {
    //        if (white[i] ==1)
    //            w[i].draw(0,0);
    //    }
    
    
    cout <<piandKeyboard<<endl;
    ofSetColor(255, 0, 0);
    ofDrawBitmapString(ofToString(piandKeyboard), 100,100);
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 
    
}
