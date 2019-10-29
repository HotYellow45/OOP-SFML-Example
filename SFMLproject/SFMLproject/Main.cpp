#include"SFML/include/SFML/Graphics.hpp"

sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello SFML!!", sf::Style::Default);

int main() {
	
	sf::RectangleShape rect(sf::Vector2f(500.0f, 100.0f));
	rect.setFillColor(sf::Color::Red);
	rect.setPosition(viewSize.x / 2, viewSize.y / 2);
	rect.setOrigin(sf::Vector2f(rect.getSize().x / 2, rect.getSize().y / 2));

	//Circle

	sf::CircleShape circle(100);
	circle.setFillColor(sf::Color::Magenta);
	circle.setPosition(viewSize.x / 2, viewSize.y / 2);
	circle.setOrigin(sf::Vector2f(circle.getRadius(), circle.getRadius() / 2));

	//Triangle

	sf::ConvexShape triangle;
	triangle.setPointCount(3);
	triangle.setPoint(0, sf::Vector2f(-100, 0));
	triangle.setPoint(1, sf::Vector2f(0, -100));
	triangle.setPoint(2, sf::Vector2f(-50, 0));
	triangle.setFillColor(sf::Color::Black);
	triangle.setPosition(viewSize.x / 2, viewSize.y / 2);

	//initialise game objects
	while (window.isOpen())
	{
		//handle keyboard events
		//update game objects
		window.clear(sf::Color::Blue);
		//render game objects
		window.draw(rect);
		window.draw(circle);
		window.draw(triangle);
		window.display();
	}
	return 0;
}