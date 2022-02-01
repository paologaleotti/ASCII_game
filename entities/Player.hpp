#include "Entity.hpp"
#include "../room/Room.hpp"

class Player : public Entity{
    public:
	int score;

	Player(Room *room, int hp, int dmg, bool isDead=false, int x=0, int y=0, int score=0);
	void mv_left(Room *room);
    void mv_right(Room *room);
    void mv_up(Room *room);
    void mv_down(Room *room);
	void pickup_artifact(Room *room);
};