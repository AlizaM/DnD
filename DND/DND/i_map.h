#pragma once

#include "i_room.h"

enum class Direction
{
	WEST,
	NORTH,
	EAST,
	SOUTH,
	TOTAL_DIRECTIONS
};

struct PlayerDirectionPair
{
public:
	int m_playerId;
	Direction m_direction;
};

class IMap
{
public:
	virtual IRoom move(PlayerDirectionPair playerDirectionPair) = 0;

	virtual ~IMap() {};
};