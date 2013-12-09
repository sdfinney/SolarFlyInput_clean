//
//  datalog.cpp
//  SolarFlyInput_clean
//
//  Created by Michael Varona on 10/28/13.
//
//

#include "datalog.h"

ofFile::ofFile()

void datalog::setup(){

ofFile newFile(ofToDataPath("datalog.txt"), ofFile::Write);
    
    newFile.create();


};