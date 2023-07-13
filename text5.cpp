#include <SFML/Graphics.hpp>
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
    window.setFramerateLimit(23);
 sf::Sprite sprite;
 sf::Texture texture;

 if(!texture.loadFromFile("car.png")){
  std::cout<<"Error"<<std::endl;
 }

sprite.setTexture(texture);
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type){
                case sf::Event::Closed:
                std::cout<<"key pressed";
                break;
                
                               

        

            }



          






            // live 


        }
        sprite.move(sf::Vector2f(0,0.1));
    
        

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}
