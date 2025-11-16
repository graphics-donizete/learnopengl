#include <iostream>

#include <GL/gl.h>

#include <SFML/Window.hpp>

int main(int, char **)
{
    sf::Window window(sf::VideoMode({800, 600}), "OpenGL");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
    }

    glBlendEquation(1);
}
