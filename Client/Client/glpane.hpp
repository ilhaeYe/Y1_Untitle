//
//  glpane.hpp
//  Client
//
//  Created by 예일해 on 2018. 6. 5..
//  Copyright © 2018년 RomanceDuck. All rights reserved.
//

#ifndef glpane_hpp
#define glpane_hpp

#include <common.hpp>

class BasicGLPane : public wxGLCanvas
{
public:
    BasicGLPane(wxFrame* parent, int* args);
    virtual ~BasicGLPane();
    
    void render(wxPaintEvent& evt);
    void prepare3DViewport(int topleft_x, int topleft_y, int bottomrigth_x, int bottomrigth_y);
    void prepare2DViewport(int topleft_x, int topleft_y, int bottomrigth_x, int bottomrigth_y);
    
    int getWidth();
    int getHeight();

private:
    wxGLContext* m_context;
    

    // events
    void resized(wxSizeEvent& evt);
    void mouseMoved(wxMouseEvent& event);
    void mouseDown(wxMouseEvent& event);
    void mouseWheelMoved(wxMouseEvent& event);
    void mouseReleased(wxMouseEvent& event);
    void rightClick(wxMouseEvent& event);
    void mouseLeftWindow(wxMouseEvent& event);
    void keyPressed(wxKeyEvent& event);
    void keyReleased(wxKeyEvent& event);
    
    DECLARE_EVENT_TABLE()
};


#endif /* glpane_hpp */
