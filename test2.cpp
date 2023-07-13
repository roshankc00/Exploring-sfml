#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");

// circle
// sf::CircleShape circle(150);
// circle.setFillColor(sf::Color::Blue);//color of the circle 
// circle.setOutlineThickness(10);

// triangle
// sf::CircleShape polygon(300,3);

// polygon
// sf::CircleShape polygon(300,4);
// sf::CircleShape polygon(300,8);

// convex shape
// sf::ConvexShape shape;
// shape.setPointCount(6);
// shape.setPoint(0,sf::Vector2f(40,70));
// shape.setPoint(1,sf::Vector2f(60,70));
// shape.setPoint(2,sf::Vector2f(200,200));
// shape.setPoint(3,sf::Vector2f(350,300));
// shape.setPoint(4,sf::Vector2f(300,450));
// shape.setPoint(5,sf::Vector2f(320,500));

// drawing the line 
// sf::RectangleShape line;
// line.setSize(sf::Vector2f(200,3));
// sf::Vertex line2[]=
// {
//   sf::Vertex(sf::Vector2f(25,10)),
//   sf::Vertex(sf::Vector2f(400,100))

// };




// texture 
// sf::Texture texture;

// if(!texture.loadFromFile("car.png")){
//     std::cout<<"ERROR ERROR AND ERROR"<<std::endl;
// }

// circle.setTexture(&texture);
// circle.setTextureRect(sf::IntRect(0,0,20,45));





// drawing using the vertex point 

// sf::Vertex point;

// point.position=sf::Vector2f(300,400);
// point.color=sf::Color::Red;
// sf::VertexArray line(sf::Lines,2);
// line[0].position=sf::Vector2f(200,150);
// line[0].color=sf::Color::Red;

// line[1].position=sf::Vector2f(400,90);
// line[1].color=sf::Color::Green;











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
               
            }

            window.clear();
            // window.draw(circle);
            // window.draw(polygon);
            // window.draw(shape);
            // window.draw(line2,2,sf::Lines);

            // vertex drawing 
            // window.draw(line);

            window.display();

        }
    }
    return 0;
}
