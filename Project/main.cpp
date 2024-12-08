#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    bool isFinished = false;
    const int FRAMERATE_LIMIT = 60;
    const uint32_t MAX_HEIGHT = 1920;
    const uint32_t MAX_WIDTH = 1080;

    auto window = sf::RenderWindow({MAX_HEIGHT, MAX_WIDTH}, "PacMan");
    window.setFramerateLimit(FRAMERATE_LIMIT);

    while (window.isOpen())
    {
        for (auto event = sf::Event(); window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}