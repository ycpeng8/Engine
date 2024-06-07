cmake_minimum_required(VERSION 3.28)
project(Engine)

set(CMAKE_CXX_STANDARD 17)

add_executable(Engine main.cpp
        RenderManager/RenderManager.cpp
        RenderManager/RenderManager.h)
