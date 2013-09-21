
#include "VariantTo.hpp"
#include <kdm/code/PreprocessorDirective.hpp>

using namespace kdm::code;

VariantTo::VariantTo() : 
	m_to(),
    m_from()
{
}

VariantTo::~VariantTo()
{
}

VariantTo::to_t VariantTo::getTo() const
{
	return e4c::returned(m_to);
}

VariantTo::from_t VariantTo::getFrom() const
{
	return e4c::returned(m_from);
}



