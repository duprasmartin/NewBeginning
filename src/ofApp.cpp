#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    mySmiley.setPosition(ofGetWidth()/2,ofGetHeight()/2);
    mySmiley.lefteye.setOffset(-20);
    mySmiley.righteye.setOffset(20);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,0);
    ofDrawBitmapString("Martin", 100, 100);
    
    ofSetColor(255,255,0);
    ofDrawCircle(mySmiley.getPositionx(),mySmiley.getPositiony(), mySmiley.getSize());
    
    ofSetColor(12,12,12); // white
    //draw left eye:
    ofDrawCircle(mySmiley.getPositionx()+mySmiley.lefteye.getOffset(),
                 mySmiley.getPositiony()- 12,
                 9);
    //draw right eye:
    ofDrawCircle(mySmiley.getPositionx()+mySmiley.righteye.getOffset(),
                 mySmiley.getPositiony()- 12,
                 9);
    
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


void Smiley::setPosition(int x, int y)
{
    m_pos_x = x;
	m_pos_y = y;
}

int Smiley::getPositionx() {
    return m_pos_x;
}
                 
int Smiley::getPositiony() {
    return m_pos_y;
}
                 

int Smiley::getSize(){
    return m_size;
}

void Eye::setOffset(int x){
    m_offset = x;
}


int Eye::getOffset() {
    return m_offset;
}


