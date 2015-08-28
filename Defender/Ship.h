#ifndef SHIP
#define SHIP

#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Ship {

public:

	Ship ();
	sf::CircleShape get_character() {return _Player;};
	
private:

	sf::CircleShape _Player;

};	
#endif