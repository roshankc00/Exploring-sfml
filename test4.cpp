#include <SFML/Graphics.hpp>
#include<iostream>

    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
class Player
{  
    private:
    sf::Sprite playerSprite;
    sf::Texture playerTexture;
     public:
    Player(){
        if(!playerTexture.loadFromFile("car.png")){
            std::cout<<"Error"<<std::endl;
        }
        playerSprite.setTexture(playerTexture); 
    }
     void draw(sf::RenderWindow &window){
        window.draw(playerSprite);
    }


};

int main(){
        while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type){
                case sf::Event::Closed:
                std::cout<<"key pressed";
                break;     
                               

        

            }
        }
      
        
    Player p1;
    p1.draw(window);
     window.clear();
       window.display();

     
    }
    return 0;


}