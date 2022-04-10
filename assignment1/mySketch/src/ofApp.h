#pragma once

#include "ofMain.h"
#include "ofxGui.h"

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
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	// screen dimensions
	float width;
	float height;

	// For screenshot
	ofImage imageScreenshot;
	int cnt;

	// For panel/sliders
	ofxPanel gui;

	//for the themes
	ofParameterGroup themes;
	ofParameter<bool> forest;
	ofParameter<bool> ocean;
	ofParameter<bool> desert;
	ofVec3f forest_array[5];
	ofVec3f ocean_array[5];
	ofVec3f desert_array[5];

	//for the other controls
	ofParameterGroup controls;
	ofParameter<int> nShapes;
	ofParameter<bool> toggle1;
	ofParameter<bool> toggle2;
	ofParameter<bool> toggle3;
	ofParameter<bool> toggle4;
	ofParameter<ofColor> color1;

	//for comparision before and after themes
	bool forestprev;
	bool oceanprev;
	bool desertprev;

	// for comparision before and after other controls
	int nShapesprev;
	bool toggle1prev;
	bool toggle2prev;
	bool toggle3prev;
	bool toggle4prev;
	
	// for locations+dimentions of shapes
	int x[20];
	int y[20];
	int w[20];
	int h[20];

	ofParameterGroup all;
};