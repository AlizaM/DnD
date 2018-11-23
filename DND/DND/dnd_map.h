#pragma once
#include "i_map.h"

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

	virtual IRoom move(PlayerDirectionPair playerDirectionPair) override;

private:
	Map() {}
};

