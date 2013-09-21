
#include "Entity.hpp"
#include <myDsl/Entity.hpp>
#include <myDsl/Property.hpp>

using namespace myDsl;

Entity::Entity() : 
	m_extends(),
    m_properties()
{
}

Entity::~Entity()
{
}

Entity::extends_t Entity::getExtends() const
{
	return e4c::returned(m_extends);
}

Entity::properties_t Entity::getProperties() const
{
	return e4c::returned(m_properties);
}



