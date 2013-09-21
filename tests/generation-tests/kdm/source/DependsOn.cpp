
#include "DependsOn.hpp"
#include <kdm/source/AbstractInventoryElement.hpp>

using namespace kdm::source;

DependsOn::DependsOn() : 
	m_to(),
    m_from()
{
}

DependsOn::~DependsOn()
{
}

DependsOn::to_t DependsOn::getTo() const
{
	return e4c::returned(m_to);
}

DependsOn::from_t DependsOn::getFrom() const
{
	return e4c::returned(m_from);
}



