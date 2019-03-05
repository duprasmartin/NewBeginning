#pragma once

#include "ofMain.h"


class Eye {
public:
    void blink();
    void setOffset(int x);
    int getOffset();
    
private:
    int m_offset;
    bool open = TRUE;
};


class Smiley {
public:
    void setPosition(int x, int y);
    int getPositionx();
    int getPositiony();
    
    int getSize();
    
    Eye lefteye;
    Eye righteye;
    
    
private:
    int m_pos_x;
    int m_pos_y;
    int m_size = 50;
};




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
    
    Smiley mySmiley;
		
};
