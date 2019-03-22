#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableAlphaBlending();
    ofBackground(24, 168, 192);
    ofSetColor(255, 255, 255, 200);
    
    sphere_x = ofRandom(0, ofGetWidth());
    sphere_y = 0;
    
    for (int i=0; i<num; i++) {
        xArray[i] = ofRandom(0, ofGetWidth());
        yArray[i] = ofRandom(-30, 0);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    sphere_y = sphere_y + ofGetFrameNum()/15;
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for (int i=0; i < num; i++) {
        sphere[i].setPosition(xArray[i], sphere_y, yArray[i]);
        sphere[i].set(10, 16);
        //        sphere.drawWireframe();
    }
    for (int i=1; i<num; i++) {
        sphere[i].draw();
    }
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
