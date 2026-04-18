cmake_minimum_required(VERSION 3.10.0)
project(learnopengl VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

subdirs(external/SFML external/GLAD shaders)

set(OpenGL_GL_PREFERENCE GLVND)
find_package(OpenGL REQUIRED)

add_executable(learnopengl main.cpp)
target_link_libraries(
    learnopengl
    OpenGL::GL
    SFML::Window
    SFML::System
    LEARNOPENGL::GLAD
    LEARNOPENGL::shaders)
