#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
int main()
{
// prevent window resizing 
    // sf::RenderWindow window(sf::VideoMode(600, 600), "Car game !",sf::Style::Titlebar | sf::Style::Close);
     sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
sf::Clock clock;
window.setFramerateLimit(23);


     bool isFullScreen=true;



 sf::Sprite background;   
 sf::Texture texture;
 sf::View view(sf::FloatRect(0,0,1500,1500));
  if (!texture.loadFromFile("road.png"))
    {
        std::cout << "Error Error and Error " << std::endl;
    }
    background.setTexture(texture);
      background.setPosition(sf::Vector2f(100, 150));


    //  moving the view 
    // view.move (sf::Vector2f(50,100));
    // setting the view to the center 
    // view.setCenter(sf::Vector2f(300,300));

    // rotating the view 
    // view.rotate(25); 

    // scaling rhe view 
    // view.zoom(0.5f);
    // according from original size
    // view.setSize(sf::Vector2f(400,200));

    // Resiging the view with window 
    window.setView(view);


// playing the sound effect
// sf::SoundBuffer buffer;
// if(!buffer.loadFromFile("town-10169.mp3")){
//     std::cout<<"music not found :)"<<std::endl;

// }
// sf::Sound sound;
// sound.setBuffer(buffer);
// sound.play();




// playing the music 
// sf::Music music;
// if(!music.openFromFile("town-10169.mp3")){
//     std::cout<<"ERROR ERROR :"<<std::endl;
// }

// music.play();

// // extra functionality
// music.setPlayingOffset(sf::seconds(10));
// music.setVolume(23);



















// Recording the sound 
if(!sf::SoundBufferRecorder::isAvailable()){
    std::cout<<"not recordeed :)"<<std::endl;

}

sf::SoundBufferRecorder recorder;
recorder.start();





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
            




        //    save the recorder 
            // case sf::Event::KeyPressed:
            // recorder.stop();
            // const sf::SoundBuffer &buffer=recorder.getBuffer();
            // buffer.saveToFile("roshan.ogg");

            //   break;
               
            }



            sf::Time time =clock.getElapsedTime();

std::cout<<1.0f/time.asSeconds()<<std::endl;
clock.restart().asSeconds();

            window.clear();
            window.draw(background);    

            window.display();

        }
    }
    return 0;
}
