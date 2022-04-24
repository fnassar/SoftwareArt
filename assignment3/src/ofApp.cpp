#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {

	ofSetVerticalSync(true);
	ofBackgroundHex(0xfdefc2);
	ofSetLogLevel(OF_LOG_NOTICE);

	box2d.init();
	box2d.setGravity(0, 10);
	box2d.createGround();
	box2d.setFPS(60.0);
	box2d.registerGrabbing();

	// declare audio files
	audioFiles[0] = "316898__jaz-the-man-2__do.wav";
	audioFiles[1] = "316908__jaz-the-man-2__re.wav";
	audioFiles[2] = "316906__jaz-the-man-2__mi.wav";
	audioFiles[3] = "316904__jaz-the-man-2__fa.wav";
	audioFiles[4] = "316912__jaz-the-man-2__sol.wav";
	audioFiles[5] = "316902__jaz-the-man-2__la.wav";
	audioFiles[6] = "316913__jaz-the-man-2__si.wav";
}

//--------------------------------------------------------------
void ofApp::update() {

	box2d.update();
	ofRemove(circle2d, ofxBox2dBaseShape::shouldRemoveOffScreen);
	ofRemove(rect2d, ofxBox2dBaseShape::shouldRemoveOffScreen);
}


//--------------------------------------------------------------
void ofApp::draw() {
	for (auto& particle : circle2d) {
		particle->draw();
	}
	for (auto& particle : rect2d) {
		particle->draw();
	}

	string info = "";
	info += "Press [1][2][3][4][5][6][7] for a small piano sound\n";
	info += "Total Bodies: " + ofToString(box2d.getBodyCount() - 1) + "\n";
	info += "FPS: " + ofToString(ofGetFrameRate()) + "\n";
	ofSetHexColor(0x444342);
	ofDrawBitmapString(info, 30, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

	if (key == '1') {
		float x = ofRandom(15, 30);
		ofColor col1 = RGB(150, 0, 150);

		auto particle = make_shared<Circle2d>(box2d.getWorld(), mouseX, mouseY, x, 0, audioFiles[0]);
		circle2d.push_back(particle);
		particle->playSound();
	}
	else if (key == '4') {
		float x = ofRandom(20, 40);
		ofColor col1 = RGB(20, 0, 150);

		auto particle = make_shared<Circle2d>(box2d.getWorld(), mouseX, mouseY, x, 3, audioFiles[3]);
		circle2d.push_back(particle);
		particle->playSound();
	}
	else if (key == '7') {
		float x = ofRandom(17, 34);
		ofColor col1 = RGB(0, 100, 100);

		auto particle = make_shared<Circle2d>(box2d.getWorld(), mouseX, mouseY, x, 6, audioFiles[6]);
		circle2d.push_back(particle);
		particle->playSound();
	}
	else if (key == '2') {
		float x = ofRandom(20, 40);
		ofColor col1 = RGB(100, 100, 0);

		auto particle = make_shared<Rect2d>(box2d.getWorld(), mouseX, mouseY, x, x, 1, audioFiles[1]);
		rect2d.push_back(particle);
		particle->playSound();
	}
	else if (key == '3') {
		float x = ofRandom(30, 60);
		ofColor col1 = RGB(0, 100, 100);

		auto particle = make_shared<Rect2d>(box2d.getWorld(), mouseX, mouseY, x, x, 2, audioFiles[2]);
		rect2d.push_back(particle);
		particle->playSound();
	}
	else if (key == '5') {
		float x = ofRandom(22, 44);
		ofColor col1 = RGB(100, 100, 0);

		auto particle = make_shared<Rect2d>(box2d.getWorld(), mouseX, mouseY, x, x, 4, audioFiles[4]);
		rect2d.push_back(particle);
		particle->playSound();
	}
	else if (key == '6') {
		float x = ofRandom(25, 50);
		ofColor col1 = RGB(0, 100, 100);

		auto particle = make_shared<Rect2d>(box2d.getWorld(), mouseX, mouseY, x, x, 5, audioFiles[5]);
		rect2d.push_back(particle);
		particle->playSound();
	}

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
void ofApp::resized(int w, int h) {

}
