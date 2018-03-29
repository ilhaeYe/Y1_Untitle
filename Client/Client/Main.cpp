//
//  main.cpp
//  Y1_Untitle
//
//  Created by 예일해 on 2018. 2. 10..
//  Copyright © 2018년 RomanceDuck. All rights reserved.
//

#include <iostream>
#include "Common.h"
#include "Game.hpp"

int main(int argc, const char * argv[]) {
    
    Game* pGame = new Game();
    pGame->Run();
    SAFE_DELETE(pGame);

    return 0;
}
