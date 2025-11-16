cmake_minimum_required(VERSION 3.10.0)
project(learnopengl VERSION 0.1.0 LANGUAGES C CXX)

find_package(OpenGL REQUIRED)

add_executable(learnopengl main.cpp)
target_link_libraries(learnopengl OpenGL::OpenGL)
