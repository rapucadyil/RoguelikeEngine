#include "entity.h"
entity::entity() {
	this->m_Id = 0; 
	this->m_Name = " ";
}

entity::entity(u32 id, literal name) {
	this->m_Id = id;
	this->m_Name = name;
}

entity::~entity() {
	delete[] this->m_Name;
}
