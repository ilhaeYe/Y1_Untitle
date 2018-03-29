//
//  Game.hpp
//  Y1_Untitle
//
//  Created by 예일해 on 2018. 3. 6..
//  Copyright © 2018년 RomanceDuck. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <memory>
#include "Time.hpp"

class Game{
public:
    Game();
    ~Game();
    
    void Run();

private:
    void Init();
    
    void Input();
    void Update(const clock_t dt);
    void Render();
    
private:
    bool _isPlaying;
    int _testInt;

};

#endif /* Game_hpp */
