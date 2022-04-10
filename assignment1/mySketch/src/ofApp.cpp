#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//// set screen size
	ofSetWindowShape(1200, 900);
	ofSetWindowPosition(20, 20);
	width = ofGetWidth();
	height = ofGetHeight();
	////for screenshots
	cnt = 0;

	//// Gui setup
	themes.setName("Themes");
	themes.add(forest.set("forest", false));
	themes.add(ocean.set("ocean", false));
	themes.add(desert.set("desert", false));

	forest_array[0] = ofVec3f(52, 98, 63);
	forest_array[1] = ofVec3f(93, 66, 31);
	forest_array[2] = ofVec3f(118, 137, 72);
	forest_array[3] = ofVec3f(96, 119, 68);
	forest_array[4] = ofVec3f(30, 47, 35);

	ocean_array[0] = ofVec3f(91, 185, 199);
	ocean_array[1] = ofVec3f(4, 115, 133);
	ocean_array[2] = ofVec3f(119, 197, 209);
	ocean_array[3] = ofVec3f(100, 195, 209);
	ocean_array[4] = ofVec3f(35, 173, 194);

	desert_array[0] = ofVec3f(249, 190, 60);
	desert_array[1] = ofVec3f(250, 201, 93);
	desert_array[2] = ofVec3f(251, 212, 125);
	desert_array[3] = ofVec3f(252, 222, 158);
	desert_array[4] = ofVec3f(253, 233, 190);

	//// To control the shapes
	controls.setName("Change Location");
	controls.add(nShapes.set("no. of lines", 10, 5, 20));
	for (int i = 0; i < 20; i++) {
		x[i] = ofRandomWidth();
		y[i] = ofRandomHeight();
		w[i] = ofRandomWidth() / 5;
		h[i] = ofRandomHeight() / 5;
	}

	//// add parameter groups to GUI
	all.add(themes);
	all.add(controls);
	gui.setup(all);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetBackgroundColor(10);

	int j = 0;
	int count = 0;

	for (int i = 0; i < nShapes; i++) {
		if (count % 5 == 0) {
			j = i;
		}

		if (forest && (!forestprev)) {
			ofSetColor(forest_array[i - j].x, forest_array[i - j].y, forest_array[i - j].z, 150);
			ocean = false;
			desert = false;
		}
		else if (ocean && (!oceanprev)) {
			ofSetColor(ocean_array[i - j].x, ocean_array[i - j].y, ocean_array[i - j].z, 150);
			forest = false;
			desert = false;
		}
		else if (desert && (!desertprev)) {
			ofSetColor(desert_array[i - j].x, desert_array[i - j].y, desert_array[i - j].z, 150);
			forest = false;
			ocean = false;
		}
		else {
			ofSetColor(255, 255, 255, 150);
		}

		ofSetCircleResolution(50);
		int a = 3;
		int n = nShapes % a;
		int b = x[i];
		int c = y[i];
		int d = w[i];
		int e = h[i];

		ofSetRectMode(OF_RECTMODE_CENTER);

		switch (n)
		{
		case 1:
			ofDrawEllipse(b, c, d, e);

		case 2:
			ofDrawRectangle(b, c, d, e);
		case 3:
			ofDrawCircle(b, c, d);
		default:
			break;
		}
		count++;
	}

	gui.draw();

	forestprev = forest;
	oceanprev = oceanprev;
	desertprev = desert;
	nShapesprev = nShapes;
	toggle1prev = toggle1;
	toggle2prev = toggle2;
	toggle3prev = toggle3;
	toggle4prev = toggle4;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	//to take a screenshot
	if (key == ' ') {
		imageScreenshot.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
		imageScreenshot.save("screenshot" + ofToString(cnt) + ".png");
		cnt++;
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