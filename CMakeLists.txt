cmake_minimum_required(VERSION 3.29)
project(projectStamina)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(menu)

add_executable(projectStamina
        menu/contextMenu.cpp
        menu/contextMenu.h
        main.cpp
        writingWork.cpp
        writingWork.h)
