#include "ofApp.h"
#include "ofxGui.h"
//--------------------------------------------------------------
void ofApp::setup() {
	s = 0;
	// set screen size
	ofSetWindowShape(800, 600);
	ofSetWindowPosition(20, 20);
	width = ofGetWidth();
	height = ofGetHeight();
	// background Setup
	ofBackground(10, 10, 10);

	// Gui setup
	//// change lines
	controls.setName("Change Location");
	controls.add(move1.set("translate 1", 0, 0, (width - 100) / 2));
	controls.add(move2.set("translate 1", 0, 0, (width - 100) / 2));
	controls.add(nLines.set("no. of lines", 30, 5, 50));
	//// change color
	controls.add(toggle.set("diffrent colors", false));
	controls.add(color.set("color", ofVec3f(200, 200, 200), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
	controls.add(color1.set("color", ofVec3f(200, 200, 200), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
	controls.add(color2.set("color", ofVec3f(200, 200, 200), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));

	gui.setup(controls);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(10, 10, 10);

	// set color depending on user selection
	ofSetColor((color->x), (color->y), (color->z));

	// change width with number of lines changing
	n = (width - 100) / nLines;

	ofSetLineWidth(3);

	for (int i = 0; i < nLines; i++) {
		x = 50 + i * n;
		y = 50;
		//ofLog() << "x1: " << x << " y1: " << y;
		x2 = 50 + i * n;
		y2 = height - 50;
		//ofLog() << "x2: " << x << " y2: " << y;
		ofDrawLine(x, y, x2, y2);
	}
	if (toggle) {
		ofSetColor((color1->x), (color1->y), (color1->z));
	}

	for (int i = 0; i < nLines / 2; i++) {
		x2 = 50 + i * n;
		y2 = height - 50;
		x3 = 50 + i * n + move1;////////
		y3 = 50;
		ofDrawLine(x2, y2, x3, y3);
	}
	if (toggle) {
		ofSetColor((color2->x), (color2->y), (color2->z));
	}
	for (int i = nLines - 1; i > nLines / 2 - 1; i--) {
		x2 = 50 + i * n;
		y2 = height - 50;
		x3 = 50 + i * n - move2;////////
		y3 = 50;
		ofDrawLine(x2, y2, x3, y3);
	}
	//DebugBreak;
	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == 's') {
		img.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
		s++;
		img.save("myPic" + (to_string(s)) + ".jpg");
	}
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
