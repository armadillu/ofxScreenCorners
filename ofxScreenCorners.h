//
//  ofxScreenCorners.h
//  emptyExample
//
//  Created by Oriol Ferrer Mesià on 26/10/12.
//
//

#ifndef emptyExample_ofxScreenCorners_h
#define emptyExample_ofxScreenCorners_h


#include "ofMain.h"
#include "ofxiPhone.h"
#include "ofxiPhoneExtras.h"
#include "ofxRetinaImage.h"


class ofxScreenCorners : public ofImage{

	public:

	void setup(string imageName){
		cornerImage.loadImage(imageName);
	}

	void draw(){

		ofSetColor(255);
		ofSetupScreen();

		cornerImage.draw(0,0);

		ofPushMatrix();
			ofTranslate(ofGetWidth(), 0);
			glScalef(-1, 1, 1);
			cornerImage.draw(0,0);
		ofPopMatrix();

		ofPushMatrix();
			ofTranslate(0, ofGetHeight());
			glScalef(1, -1, 1);
			cornerImage.draw(0,0);
		ofPopMatrix();

		ofPushMatrix();
			ofTranslate(ofGetWidth(), ofGetHeight());
			glScalef(-1, -1, 1);
			cornerImage.draw(0,0);
		ofPopMatrix();

	}

	ofxRetinaImage cornerImage;

};
#endif
