#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetBackgroundColor(255, 255, 255);
	ofSetLogLevel(OF_LOG_NOTICE);
	brushLoc = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
	//
	auto point = make_shared<ofVec2f>();
	point->x = brushLoc.x;
	point->y = brushLoc.y;
	linepoints.push_back(point);
	
	col.setHsb(0,0,0);
	// gui
	controls.add(color1.set("color",0,0,255));
	gui.setup(controls);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	this->addPoint();
	for (auto& point : linepoints) {
		col.setHsb(color1, 100, 100);
		//ofSetColor(col);
		ofDrawCircle(point->x, point->y, 10);
	}
}

void ofApp::addPoint() {
	brushLoc.x += (ofGetMouseX() - brushLoc.x) * 0.01;
	brushLoc.y += (ofGetMouseY() - brushLoc.y) * 0.01;
	auto point = make_shared<ofVec2f>();
	point->x = brushLoc.x;
	point->y = brushLoc.y;
	linepoints.push_back(point);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	/*auto line = make_shared<ofPolyline>();

	brushStrokes.push_back(line);

	for (auto& line : brushStrokes) {

	}*/
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
