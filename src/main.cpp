#include <SFML/Graphics.hpp>

#define WIDTH 1024
#define HEIGHT 768
#define RADIUS 250.0

int main()
{
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "My Window");
    sf::CircleShape shape(RADIUS);
    shape.setFillColor(sf::Color::Blue);

    shape.setOrigin(RADIUS, RADIUS);
    shape.setPosition(WIDTH/2, HEIGHT/2);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}