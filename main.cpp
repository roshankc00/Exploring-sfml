#include <SFML/Graphics.hpp>
#include<SFML/OpenGL.hpp>
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");

    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // glP(45.0,window.getSize().x/window.getSize().y,1.0,500.0);
    glMatrixMode(GL_MODELVIEW);
    bool running=true;






    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type){
                case sf::Event::Closed:
                std::cout<<"key pressed";
                running=false;
                break;
                
                               

        

            }



          








        }
    



        // window.clear();
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_TRIANGLES);
        {
            glVertex3f(0.0,2.0,-5.0);
            glVertex3f(-2.0,-2.0,-5.0);
            glVertex3f(2.0,-2.0,-5.0);

        }
  
  glEnd();

        window.display();
    }

    return 0;
}
