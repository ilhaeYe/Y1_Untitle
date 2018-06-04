//
//  common.hpp
//  Y1_Untitle
//
//  Created by 예일해 on 2018. 3. 6..
//  Copyright © 2018년 RomanceDuck. All rights reserved.
//

#ifndef common_hpp
#define common_hpp

#include "wx/wxprec.h"
#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif

#include "wx/sizer.h"
#include "wx/glcanvas.h"

// include OpenGL
#ifdef __WXMAC__
#include "OpenGL/glu.h"
#include "OpenGL/gl.h"
#else
#include <GL/glu.h>
#include <GL/gl.h>
#endif

#define SAFE_DELETE(ptr) if(ptr != nullptr) { delete ptr; ptr = nullptr; }



#endif /* common_hpp */
