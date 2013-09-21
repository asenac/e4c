
#include "EEnum.hpp"
#include <ecore/EEnumLiteral.hpp>

using namespace ecore;

EEnum::EEnum() : 
	m_eLiterals()
{
}

EEnum::~EEnum()
{
}

EEnum::eLiterals_t EEnum::getELiterals() const
{
	return e4c::returned(m_eLiterals);
}

void EEnum::addELiterals(ecore::EEnumLiteral_ptr eLiterals_)
{
	eLiterals_->setEEnum(this);
	m_eLiterals.push_back(std::unique_ptr < ecore::EEnumLiteral >(eLiterals_));
}




