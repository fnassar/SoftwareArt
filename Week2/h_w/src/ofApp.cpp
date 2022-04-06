#include "ofApp.h"
#include<map>
#include<string>

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(50, 50, 50);
	x1 = ofRandomWidth();
	y1 = ofRandomHeight();
	r1 = ofRandom(200, 600);
	color1.r = 199;
	color1.b = 192;
	color1.g = 207;
	x2 = ofRandomWidth();
	y2 = ofRandomHeight();
	r2 = ofRandom(200, 600);
	color2.r = 222;
	color2.b = 213;
	color2.g = 232;
	x3 = ofRandomWidth();
	y3 = ofRandomHeight();
	r3 = ofRandom(200, 600);
	color3.r = 213;
	color3.b = 188;
	color3.g = 199;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(color1);
	ofFill();
	ofSetCircleResolution(100);
	ofDrawEllipse(x1, y1, r1, r1);
	ofSetColor(color2);
	ofFill();
	ofDrawEllipse(x2, y2, r2, r2);
	ofSetColor(color3);
	ofFill();
	ofDrawEllipse(x3, y3, r3, r3);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 's') {
		printf("S\n");
		img.grabScreen(0, 0, ofGetWidth(),ofGetHeight());
		img.save("myPic3.jpg");
		printf("S2\n");
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
