//
//  main.hpp
//  Client
//
//  Created by 예일해 on 2018. 5. 24..
//  Copyright © 2018년 RomanceDuck. All rights reserved.
//

#ifndef main_hpp
#define main_hpp

#include "common.hpp"
#include "glpane.hpp"
//#include "canvas.hpp"

class MyApp : public wxApp
{
public:
    virtual bool OnInit() wxOVERRIDE;
//    virtual int OnExit() wxOVERRIDE;
    
private:
//    wxGLCanvas * _canvas;
    BasicGLPane* _glPane;

};

#endif /* main_hpp */
