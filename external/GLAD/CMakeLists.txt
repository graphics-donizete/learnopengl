add_library(GLAD INTERFACE)
target_include_directories(GLAD INTERFACE include)
add_library(LEARNOPENGL::GLAD ALIAS GLAD)