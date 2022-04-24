#pragma once
#include "ofMain.h"
#include "ofxBox2d.h"

// ------------------------------------------------- a simple extended box2d circle
class Circle2d : public ofxBox2dCircle {
public:
	ofColor color;
	ofSoundPlayer sound;


	Circle2d(b2World* world, float x, float y, float w, int num, string soundFile) {
		setPhysics(3.0, 0.3, 0.2);
		setup(world, x, y, w);
		float rand = ofRandom(100, 255);
		if (num == 0) {
			color.setHsb(0, 100, rand);
		}
		else if (num == 1) {
			color.setHsb(60, 100, rand);
		}
		else if (num == 2) {
			color.setHsb(120, 100, rand);
		}
		else if (num == 3) {
			color.setHsb(180, 100, rand);
		}
		else if (num == 4) {
			color.setHsb(240, 100, rand);
		}
		else if (num == 5) {
			color.setHsb(100, 100, rand);
		}
		else if (num == 6) {
			color.setHsb(200, 100, rand);
		}
		sound.load(soundFile);
		sound.setVolume(0.6);
	}

	void playSound() {
		sound.play();
	}

	void draw() {
		float radius = getRadius();

		ofPushMatrix();
		ofTranslate(getPosition());
		ofSetColor(color);
		ofFill();
		ofDrawCircle(0, 0, radius);
		ofPopMatrix();
	}
};
// -------------------------------------------------

class Rect2d : public ofxBox2dRect {
public:
	ofColor color;
	ofSoundPlayer sound;


	Rect2d(b2World* world, float x, float y, float w, float h, int num, string soundFile) {
		setPhysics(3.0, 0.3, 0.2);
		float width = ofRandom(20, 40);
		setup(world, x, y, w, h);
		float rand = ofRandom(100, 255);
		if (num == 0) {
			color.setHsb(0, 100, rand);
		}
		else if (num == 1) {
			color.setHsb(60, 100, rand);
		}
		else if (num == 2) {
			color.setHsb(120, 100, rand);
		}
		else if (num == 3) {
			color.setHsb(180, 100, rand);
		}
		else if (num == 4) {
			color.setHsb(240, 100, rand);
		}
		else if (num == 5) {
			color.setHsb(100, 100, rand);
		}
		else if (num == 6) {
			color.setHsb(200, 100, rand);
		}
		sound.load(soundFile);
		sound.setVolume(0.6);
	}

	void playSound() {
		sound.play();
	}

	void draw() {
		float width = getWidth();

		ofPushMatrix();
		ofTranslate(getPosition());
		ofSetColor(color);
		ofFill();
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofDrawRectRounded(ofRectangle(0, 0, width, width), width / 4);
		ofDrawRectangle(0, 0, width, width);
		ofPopMatrix();
	}
};

// -------------------------------------------------
class ofApp : public ofBaseApp {

public:

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void resized(int w, int h);

	float                                   px, py;
	bool                                    bDrawLines;
	bool                                    bMouseForce;

	ofxBox2d                                box2d;           // the box2d world

	vector    <shared_ptr<Circle2d> > circle2d; // this is a custom particle the extends a circle
	vector    <shared_ptr<Rect2d> > rect2d; // this is a custom particle the extends a rect

	string audioFiles[7];
	ofImage img;
	int s = 0;

};
