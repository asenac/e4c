
#include "ExtensionTo.hpp"
#include <kdm/data/ComplexContentType.hpp>

using namespace kdm::data;

ExtensionTo::ExtensionTo() : 
	m_to(),
    m_from()
{
}

ExtensionTo::~ExtensionTo()
{
}

ExtensionTo::to_t ExtensionTo::getTo() const
{
	return e4c::returned(m_to);
}

ExtensionTo::from_t ExtensionTo::getFrom() const
{
	return e4c::returned(m_from);
}



