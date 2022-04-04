#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(213, 54, 65);
	rectWidth = 60;
	rectHeight = 90;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(234, 244, 65);
	ofDrawRectangle(30, 30, rectWidth, rectHeight);
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'd') {
		rectWidth+=10;
		
	}
	else if (key == 'a') {
		rectWidth-=10;
	}
	if (key == 's') {
		rectHeight += 10;
	}
	else if (key == 'w') {
		rectHeight -= 10;
	}
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
