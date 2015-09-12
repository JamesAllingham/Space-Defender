#ifndef GAME_LOGIC
#define GAME_LOGIC

#include <list>
using std::list;
#include <memory>
using std::shared_ptr;
using std::make_shared;

#include "UserInterface.h"
#include "Ship.h"
#inlcude "Flyer.h"
#include "Events.h"
#include "TextureID.h"
#include "StopWatch.h"
#include "EntityHolder.h"

class GameLogic {

public:
	//Constructor needs to go to main screen, main screen leads to run game
	GameLogic ();
private:
	void runGame();
	void update(float delta_time);
	void createEntities ();
	
	UserInterface _user_interface;
	shared_ptr<Ship> _player_ptr;
	EntityHolder _entites;
	bool _game_running = true;
	int _number_of_flyers_killed = 0;
	static constexpr const int _NUMBER_OF_FLYERS_TO_KILL = 20;
	static constexpr const int _MAX_X = 4800;
	static constexpr const int _MAX_Y = 600;
	
	static constexpr const auto _FPS_LIMIT = 120.f; //this should be a constant I think, we never want it to change. should also be static since it is common to all instances of the game. the constexpr is a c++11 keyword used to allow us to have this static const
};
#endif
