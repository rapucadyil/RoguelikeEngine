#pragma once
#include <stdlib.h>
#include "entity.h"
#include "macros.h"
inline static void* push(int amt, char type) {
	switch (type) {
	case 'e':
		entity *allocd = (entity*)malloc(amt * sizeof(entity));
		allocd->setID(0);
		allocd->setName("player");
		return allocd;
		break;
	}
}