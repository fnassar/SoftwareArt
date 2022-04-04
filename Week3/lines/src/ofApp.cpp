#include "ofApp.h"

using std::vector;

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(10, 10, 10);
	screenWidth = ofGetScreenWidth();
	screenHeight = ofGetScreenHeight();
	for (int i = 0; i < 50; i++) {
		lines1[i] = {100 + (float)i*3, 100, 100 + (float)i*3, screenHeight - 100};// x1, y1, x2, y2
		lines2[i] = {screenWidth - 100 - (float)i*3, 100, screenWidth - 100 - (float)i*3, screenHeight - 100};// x1, y1, x2, y2
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < 50; i++) {
		ofDrawLine()
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
