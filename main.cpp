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

    (void)window.setActive(true);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        glClearColor(1, 0, 0, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        window.display();
    }
}
