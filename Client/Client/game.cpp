//
//  game.cpp
//  Y1_Untitle
//
//  Created by 예일해 on 2018. 3. 6..
//  Copyright © 2018년 RomanceDuck. All rights reserved.
//

#include "game.hpp"

Game::Game()
:_isPlaying(false) {

}

Game::~Game(){
    
}

void Game::Init(){
    _isPlaying = true;

}

void Game::Run(){
    Init();
    
    // fps : frame per seconds
    // 60 fps = 60 frame per 1 second
    //        = 1 frame per 1/60 second
    //        = 1 frame per 1/60 * 1000 ms
    double MS_PER_FRAME = (16.6666667);
    size_t MAX_FRAME_CNT = 60;

    clock_t preTime = clock();
    double lag = 0.0;
    while(_isPlaying){
        clock_t curTime = clock();
        double elapseTime = curTime - preTime;
        lag += elapseTime;
        preTime = curTime;
        Input();
        for (size_t i=0; lag>=MS_PER_FRAME && i<MAX_FRAME_CNT; ++i){
            Update(MS_PER_FRAME);
            lag -= MS_PER_FRAME;
        }
        Render();
    }
}

void Game::Input(){
//    printf("input\n");
    
}

void Game::Update(const clock_t dt){
    printf("%lu:%d\n", dt, _testInt++);
    if (_testInt >= 10000) {
        _isPlaying = false;
    }
}

void Game::Render(){
//    printf("render\n");

}
