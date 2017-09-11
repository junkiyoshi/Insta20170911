#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(255);
	ofSetWindowTitle("Insta");

	ofEnableDepthTest();

	//ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	ofRotateZ(ofGetFrameNum() % 360);

	float radius = 300;
	float x, y, tmp_x, tmp_y;
	float z = 0;
	int degs[5] = { 225, 270, 0, 90, 125 };
	ofColor c;

	for (int deg = 0; deg < 360 * 10; deg += 8) {
		c.setHsb((deg % 360) / 360.f * 255, 255, 255);
		ofSetColor(c);

		ofBeginShape();

		x = radius * cos(deg * DEG_TO_RAD);
		y = radius * sin(deg * DEG_TO_RAD);

		ofPushMatrix();
		ofTranslate(x, y, z);
		ofRotateZ(deg + 90);

		for (int i = 0; i < 5; i++) {

			tmp_x = 30 * cos(degs[i] * DEG_TO_RAD);
			tmp_y = 30 * sin(degs[i] * DEG_TO_RAD);

			ofVertex(tmp_x, tmp_y, z);
		}

		ofVertex(ofVec3f(0, 0, z));

		ofEndShape(true);

		ofPopMatrix();

		z -= 3;
	}
	
	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
