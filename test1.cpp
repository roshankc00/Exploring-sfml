#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
    sf::Texture texture;
    // no repetation
    texture.setRepeated(false);

    //    loading the car image
    if (!texture.loadFromFile("car.png"))
    {
        std::cout << "Error in loading the page " << std::endl;
    }
    sf::Sprite sprite(texture);

    // positive number in x axis goes right for y down
    sprite.setOrigin(sf::Vector2f(sprite.getTexture()->getSize().x * 0.5, sprite.getTexture()->getSize().y * 0.5));

    // setting up the car position
    sprite.setTextureRect(sf::IntRect(0, 0, 100, 200));

    // setting up the car color
    sprite.setColor(sf::Color(255, 0, 0));

    // setting up the sprite position
    sprite.setPosition(sf::Vector2f(300, 200));

    // getting the sprite postion
    std::cout << "the x postion of the sprite is " << sprite.getPosition().x << std::endl;
    std::cout << "the y postion of the sprite is " << sprite.getPosition().y << std::endl;



    // rotation of the car
    // sprite.setRotation(45);
    // sprite.rotate(15);



    // setting up the scale 
    // sprite.setScale(sf::Vector2f(1,1));
    // sprite.scale(sf::Vector2f(1,1.3))
    














     

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed:
                std::cout << "key pressed";
                // particulaar key pressed
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                if(sprite.getPosition().y>100){
                    sprite.move(sf::Vector2f(0, -10));

                }
                    std::cout << "the x postion of the sprite is " << sprite.getPosition().x << std::endl;
                    std::cout << "the y postion of the sprite is " << sprite.getPosition().y << std::endl;
                    break;
                case sf::Keyboard::Down:
                         if(sprite.getPosition().y<510){
                    sprite.move(sf::Vector2f(0, 10));

                }
                    std::cout << "key A is pressed";
                    std::cout << "the x postion of the sprite is " << sprite.getPosition().x << std::endl;
                    std::cout << "the y postion of the sprite is " << sprite.getPosition().y << std::endl;
                    // window.close();
                    break;
                case sf::Keyboard::Left:
                  
                       if (sprite.getPosition().x > 100)
                    {
                        sprite.move(sf::Vector2f(-100, 0));
                    }
                    std::cout << "key A is pressed";
                    std::cout << "the x postion of the sprite is " << sprite.getPosition().x << std::endl;
                    std::cout << "the y postion of the sprite is " << sprite.getPosition().y << std::endl;
                    // window.close();
                    break;
                case sf::Keyboard::Right:
                    if (sprite.getPosition().x < 500)
                    {
                        sprite.move(sf::Vector2f(100, 0));
                    }
                    std::cout << "key A is pressed";
                    std::cout << "the x postion of the sprite is " << sprite.getPosition().x << std::endl;
                    std::cout << "the y postion of the sprite is " << sprite.getPosition().y << std::endl;
                    // window.close();
                    break;



                }
                break;
            }

            window.clear();
            window.draw(sprite);
            window.display();
        }
    }
    return 0;
}
