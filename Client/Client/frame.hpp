//
//  frame.hpp
//  Client
//
//  Created by 예일해 on 2018. 5. 24..
//  Copyright © 2018년 RomanceDuck. All rights reserved.
//

#ifndef frame_hpp
#define frame_hpp

#include "common.hpp"

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString& title);
    
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    
private:
    wxDECLARE_EVENT_TABLE();

};

#endif /* frame_hpp */
