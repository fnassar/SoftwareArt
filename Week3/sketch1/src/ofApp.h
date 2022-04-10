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

	// screen dim
	float width;
	float height;


	// panel

	ofxPanel gui;
	//ofxPanel gui2;

	ofParameterGroup controls;
	ofParameter<int> move1;
	ofParameter<int> move2;
	ofParameter<int> nLines;
	ofParameter<bool> toggle1;
	ofParameter<bool> toggle;
	ofParameter<ofVec3f> color;
	ofParameter<ofVec3f> color1;
	ofParameter<ofVec3f> color2;

	// lines

	//ofPolyline lines1[50];
	//ofPolyline lines2[50];

	//// variables for lines
	float x, y, x2, y2, x3, y3, n;
	// save screenshots
	int s;
	ofImage img;

};
