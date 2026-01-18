add_library(shaders INTERFACE)
target_include_directories(
    shaders
    INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

add_library(LEARNOPENGL::shaders ALIAS shaders)