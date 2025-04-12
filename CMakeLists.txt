cmake_minimum_required(VERSION 3.29)
project(Pig_Dice_5_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pig_Dice_5_0 main.cpp
        PGame.h
        Turn.cpp
        Turn.h
        Die.cpp
        Die.h
        NewPGame.cpp
        NewPGame.h
        Players.cpp
        Players.h)
