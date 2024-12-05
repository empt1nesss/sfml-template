#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


int main()
{
  sf::RenderWindow wnd(
    sf::VideoMode(640, 480),
    "SFML project",
    sf::Style::Titlebar | sf::Style::Close
  );

  while (wnd.isOpen()) {
    for (sf::Event event; wnd.pollEvent(event);) {
      switch (event.type)
      {
      case sf::Event::Closed:
        wnd.close();
        break;

      case sf::Event::KeyReleased:
        if (event.key.code == sf::Keyboard::Escape)
          wnd.close();

        break;

      default:
        break;
      }
    }
  }
  
  return 0;
}
