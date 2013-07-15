#include "ofAppGlutWindow.h"
#include "ofMain.h"
#include <SimpleAmqpClient/SimpleAmqpClient.h>

class ofApp : public ofBaseApp {
public:
	void setup() {
		AmqpClient::Channel::ptr_t connection = AmqpClient::Channel::Create("localhost");
	}
	void update() {
		
	}
	void draw() {
		
	}
};

int main() {
	ofSetupOpenGL(200, 200, OF_WINDOW);
	ofRunApp(ofPtr<ofBaseApp>(new ofApp()));
}