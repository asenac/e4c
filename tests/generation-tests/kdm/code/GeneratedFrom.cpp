
#include "GeneratedFrom.hpp"
#include <kdm/code/PreprocessorDirective.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

GeneratedFrom::GeneratedFrom() : 
	m_to(),
    m_from()
{
}

GeneratedFrom::~GeneratedFrom()
{
}

GeneratedFrom::to_t GeneratedFrom::getTo() const
{
	return e4c::returned(m_to);
}

GeneratedFrom::from_t GeneratedFrom::getFrom() const
{
	return e4c::returned(m_from);
}



