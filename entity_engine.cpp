#include "entity_engine.h"
#include "entity.h"
#include "mem_manager.h"
ecs_engine::ecs_engine() {
	this->active_entities = vector<entity*>();
}

ecs_engine::~ecs_engine() {

}

void ecs_engine::populate_entites(int max) {
	for (int i = 0; i < max; i++) {
		this->active_entities.push_back(static_cast<entity*>(push(1, 'e')));
	}
}