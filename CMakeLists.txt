cmake_minimum_required(VERSION 3.29)
project(projectStamina)

set(CMAKE_CXX_STANDARD 20)


add_executable(projectStamina main.cpp
        writingWork.cpp
        writingWork.h
        menu/contextMenu.cpp
        menu/contextMenu.h)
