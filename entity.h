#pragma once
#include "macros.h"
class entity {
private:
	u32 m_Id;
	literal m_Name;
public:
	entity();
	entity(u32 id, literal name);
	~entity();

	inline int getID() { return this->m_Id; }
	inline void setID(int val) { this->m_Id = val; }
	inline const char* getName() { return this->m_Name; }
	inline void setName(const char *val) { this->m_Name = val; }
};

