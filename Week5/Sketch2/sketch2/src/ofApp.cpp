#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	Params.setName("play with the design");
	Params.add(number.set("no. of shapes", 1, 1, 11));
	Params.add(color.set("Color saturation", 100, 0, 255));

	ofSetWindowShape(1200, 900);
	ofSetWindowPosition(50, 50);

	ofSetBackgroundColor(0);
	ofSetCircleResolution(50);

	gui.setup(Params);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	int x = 1, y = 1;
	float time = ofGetElapsedTimef();
	x = pow(floor(pow(number, 0.5)), 2);
	int z = 0;
	if (x == 4) {
		for (int i = 0; i < 900; i += 5) {
			circles(i, 1, 1, 1.0, 2, time);
			circles(i, 1, 2, 1.3, 2, time);
			circles(i, 2, 1, 1.6, 2, time);
			circles(i, 2, 2, 1.9, 2, time);
		}
	}
	else if (x == 9) {
		for (int i = 0; i < 900; i += 5) {
			circles(i, 1, 1, 1.0, 3, time);//1
			circles(i, 1, 2, 1.3, 3, time);//2
			circles(i, 1, 3, 1.6, 3, time);//3
			circles(i, 2, 1, 1.9, 3, time);//4
			circles(i, 2, 2, 1.2, 3, time);//5
			circles(i, 2, 3, 1.5, 3, time);//6
			circles(i, 3, 1, 1.8, 3, time);//7
			circles(i, 3, 2, 2.1, 3, time);//8
			circles(i, 3, 3, 2.4, 3, time);//9
		}
	}
	else {
		for (int i = 0; i < 900; i += 5) {
			circles(i, 1, 1, 1.5, 1, time);
		}
	}

	gui.draw();
}

//--------------------------------------------------------------
void ofApp::circles(int i, int x, int y, float z, int w, float time) {
	circleCol.setHsb(ofNoise((i * x) * 0.0002, +time) * 255, color, 200);
	ofSetColor(circleCol);
	float n = i * z;
	ofDrawCircle(
		((x - 1) * ofGetWidth() / w) + ofGetWidth() / w * ofNoise(n * 0.002 + time),
		((y - 1) * ofGetHeight() / w) + ofGetHeight() / w * ofNoise(n * 0.001 + time),
		20 + 10 * sin(n * 0.001 + time)
	);
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
