#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "Car game !");

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
            // case sf::Event::Resized:
            // sf::FloatRect visibleArea(0,0,event.size.width,event.size.height)  ;   
            // window.setView(sf::View());
            // break;
            case sf::Event::KeyPressed:
            recorder.stop();
            const sf::SoundBuffer &buffer=recorder.getBuffer();
            buffer.saveToFile("roshan.ogg");

              break;
               
            }

            window.clear();
            window.draw(background);    

            window.display();

        }
    }
    return 0;
}
