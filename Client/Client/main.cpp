//
//  main.cpp
//  Y1_Untitle
//
//  Created by 예일해 on 2018. 2. 10..
//  Copyright © 2018년 RomanceDuck. All rights reserved.
//

#include "main.hpp"
#include "frame.hpp"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    if (!wxApp::OnInit()){
        return false;
    }

    MyFrame* frame = new MyFrame("Minimal wxWidgets App");
    if (frame){
//        _canvas = new CanvasGL(frame);
//        frame->Show(true);
        
        wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
        int args[] = {WX_GL_RGBA, WX_GL_DOUBLEBUFFER, WX_GL_DEPTH_SIZE, 16, 0};
        
        _glPane = new BasicGLPane( (wxFrame*) frame, args);
        sizer->Add(_glPane, 1, wxEXPAND);
        
        frame->SetSizer(sizer);
        frame->SetAutoLayout(true);
        
        frame->Show();
        
        return true;
    }
    else {
        wxMessageBox(_("Window is not created"),
                     _("Error"), wxICON_ERROR);
        return false;
    }

}

//int MyApp::OnExit() {
//
//    return wxApp::OnExit();
//}

