//
//  datalog.h
//  SolarFlyInput_clean
//
//  Created by Michael Varona on 10/28/13.
//
//

#pragma once

#include "ofMain.h"
#include "ofxSpacebrew.h"

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void mouseMoved( int x, int y );
    
    Spacebrew::Connection spacebrew;
    void onMessage( Spacebrew::Message & msg );
    
    // graphs
    void addRange( ofPolyline & line, int value );
    ofPolyline  line1, line2, line3;
    float         radius1, radius2, radius3;
    
    
};
