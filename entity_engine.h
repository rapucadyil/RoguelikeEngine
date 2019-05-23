#pragma once
#include "macros.h"
class ecs_engine {
private:
	vector<class entity*> active_entities;
public:
	ecs_engine();
	~ecs_engine();
	void populate_entites(int max);

	inline vector<class entity*> getActiveEntities() { return this->active_entities; }
};
