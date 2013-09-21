
#include "Redefines.hpp"
#include <kdm/code/PreprocessorDirective.hpp>

using namespace kdm::code;

Redefines::Redefines() : 
	m_to(),
    m_from()
{
}

Redefines::~Redefines()
{
}

Redefines::to_t Redefines::getTo() const
{
	return e4c::returned(m_to);
}

Redefines::from_t Redefines::getFrom() const
{
	return e4c::returned(m_from);
}



