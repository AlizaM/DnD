#pragma once
#include "i_room.h"


class Room : public IRoom
{
public:
	Room(): room_id(++id){}
	~Room() {}

private:
	static int id;
	const int room_id;
};