#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void circles(int i, int x, int y, float z, int w, float t);
		
		ofxPanel gui;
		ofParameterGroup Params;
		ofParameter<int> number;
		ofParameter<int> color;
		/*ofParameter<bool> forest;
		ofParameter<bool> forest;*/



		int cycleVal;

		ofColor circleCol;


};
