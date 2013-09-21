
#include "ETypeParameter.hpp"
#include <ecore/EGenericType.hpp>

using namespace ecore;

ETypeParameter::ETypeParameter() : 
	m_eBounds()
{
}

ETypeParameter::~ETypeParameter()
{
}

ETypeParameter::eBounds_t ETypeParameter::getEBounds() const
{
	return e4c::returned(m_eBounds);
}


void ETypeParameter::addEBounds(ecore::EGenericType_ptr eBounds_)
{
	m_eBounds.push_back(std::unique_ptr < ecore::EGenericType >(eBounds_));
}

void ETypeParameter::addAllEBounds(const eBounds_t& eBounds_)
{
	for (auto i = eBounds_.begin(); i != eBounds_.end(); i++)
		addEBounds(*i);
}




