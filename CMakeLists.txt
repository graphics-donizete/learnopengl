cmake_minimum_required(VERSION 3.10.0)
project(learnopengl VERSION 0.1.0 LANGUAGES C CXX)

subdirs(external/SFML external/GLAD)
find_package(OpenGL REQUIRED)

add_executable(learnopengl main.cpp)
target_link_libraries(
    learnopengl
    GLAD
    OpenGL::OpenGL
    SFML::Window
    SFML::System)
