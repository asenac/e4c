
#include "KDMEntity.hpp"

using namespace kdm::core;

KDMEntity::KDMEntity() : 
	m_name()
{
}

KDMEntity::~KDMEntity()
{
}

void KDMEntity::setName(name_t _name)
{
	m_name = _name;;
}

KDMEntity::name_t KDMEntity::getName() const
{
	return m_name;
}



