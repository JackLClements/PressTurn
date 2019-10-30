#include "Actor.h"


/*
A player is a version of an Actor that is able to be controlled by the .
This includes both the player character/protagonist as well as their allied demons, although
if we create an interface that swaps between the two we could allow friendly demons to act on their own
*/
class Player : Actor
{
public:
	Player();
	~Player();

	void takeTurn(); //parse player input here, keep in mind this may need to be specifically expanded in future
	
};