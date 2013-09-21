
#include "Includes.hpp"
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

using namespace kdm::code;

Includes::Includes() : 
	m_to(),
    m_from()
{
}

Includes::~Includes()
{
}

Includes::to_t Includes::getTo() const
{
	return e4c::returned(m_to);
}

Includes::from_t Includes::getFrom() const
{
	return e4c::returned(m_from);
}



