#include <SFML/Graphics.hpp>
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type){
                case sf::Event::Closed:
                // window.close();
                std::cout<<"key pressed";
                break;
                // keyboard events 
                case sf::Event::KeyPressed:
                std::cout<<"key pressed";
                // particulaar key pressed
                switch(event.key.code){
                    case sf::Keyboard::A:
                    std::cout<<"key A is pressed";
                    // window.close();
                     break;
                }
                    break;
                case sf::Event::KeyReleased:
                std::cout<<"key releases";
                // window.close(); 
                break;
                // mouse events
                case sf::Event::MouseButtonPressed:
                //   window.close();
                  switch(event.key.code){
                    // for a particular side clicked
                    case sf::Mouse::Left:
                    std::cout<<"left key have been pressed";
                    // window.close();
                  }
                  break;
                case sf::Event::MouseMoved:
                    std::cout<<"mouse moved";
                    // window.close();
                    break;
                case sf::Event::MouseWheelMoved:
                    std::cout<<"mouse has been scrolled";
                    // window.close();
                    break;
                    // window events 
                case sf::Event::Resized:
                std::cout<<event.size.width<<" : "<<event.size.height<<std::endl;
                break;
                case sf::Event::LostFocus:
                std::cout<<"Last focus"<<std::endl;
                break;
                case sf::Event::GainedFocus:
                std::cout<<"Gained Focus : "<<std::endl;
                break;
                // tesxt event 

                case sf::Event::TextEntered:
                std::cout<<"Text has been entered "<<std::endl;  

                if(event.text.unicode==65){
                    std::cout<<"Capital A has been clicked";                   

                }
                break;       

        

            }


            // live keyboard input 

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
                std::cout<<"space is clicked"<<std::endl;
            }

            // live mouse input 
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                std::cout<<"left button of the mouse is clicked"<<std::endl;
                // mouse position
                std::cout<<sf::Mouse::getPosition(window).x<<std::endl;
                std::cout<<sf::Mouse::getPosition(window).y<<std::endl;
                // setting position
                sf::Mouse::setPosition(sf::Vector2i(14,23));
            }
            







            // live 


        }
    
        

        window.clear();
        window.display();
    }

    return 0;
}
