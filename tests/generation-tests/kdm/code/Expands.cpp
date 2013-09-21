
#include "Expands.hpp"
#include <kdm/code/PreprocessorDirective.hpp>

using namespace kdm::code;

Expands::Expands() : 
	m_to(),
    m_from()
{
}

Expands::~Expands()
{
}

Expands::to_t Expands::getTo() const
{
	return e4c::returned(m_to);
}

Expands::from_t Expands::getFrom() const
{
	return e4c::returned(m_from);
}



