#include <iostream>

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

int main(int, char **)
{
    sf::ContextSettings settings{
        .depthBits = 24,
        .stencilBits = 8,
        .antiAliasingLevel = 4,
        .majorVersion = 3,
        .minorVersion = 3,
        .attributeFlags = sf::ContextSettings::Attribute::Core,
    };

    sf::Window window(sf::VideoMode({800, 600}), "OpenGL", sf::Style::Default, sf::State::Windowed, settings);
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
