#include "entity.h"
#include "entity_engine.h"
#include "macros.h"
int main(int argc, char** argv){
	ecs_engine engine = ecs_engine();
	engine.populate_entites(5);
	return 0;
}