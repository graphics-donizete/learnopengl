#include <iostream>

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

int main(int, char **)
{
    sf::Window window(sf::VideoMode({800, 600}), "OpenGL");
    glEnable(GL_TEXTURE_2D);

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
}
