#pragma once
#include "i_dndMap.h"
#include <map>

// singleton
class Map : public IMap
{
public:
	static Map& getInstance()
	{
		static Map instance;
		return instance;
	}
	Map(Map const&) = delete;
	void operator=(Map const&) = delete;

	virtual IRoom& move(PlayerDirectionPair playerDirectionPair) override;

private:
	Map() {}
	std::map<int, IRoom*> rooms_list;
	std::map<int, std::map<Direction, PassageRoomPair>> rooms_map;
};

