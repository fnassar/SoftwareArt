#pragma once

#include "ofMain.h"
#include<map>
#include<string>

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

		ofColor color1;
		ofColor color2;
		ofColor color3;
		int x1;
		int y1;
		int r1;

		int x2;
		int y2;
		int r2;

		int x3;
		int y3;
		int r3;

		ofImage img;

		
		
};
