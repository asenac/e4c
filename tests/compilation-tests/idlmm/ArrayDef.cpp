
#include "ArrayDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ArrayDef include) START*/
/*PROTECTED REGION END*/

ArrayDef::ArrayDef() : 
	m_name(),
    m_bounds()
{
}

ArrayDef::~ArrayDef()
{
}

void ArrayDef::setName(name_t _name)
{
	m_name = _name;;
}

ArrayDef::name_t ArrayDef::getName() const
{
	return m_name;
}

ArrayDef::bounds_t ArrayDef::getBounds() const
{
	return e4c::returned(m_bounds);
}


void ArrayDef::addBounds(idlmm::Expression_ptr bounds_)
{
	m_bounds.push_back(std::unique_ptr < idlmm::Expression >(bounds_));
}

void ArrayDef::addAllBounds(const bounds_t& bounds_)
{
	for (auto i = bounds_.begin(); i != bounds_.end(); i++)
		addBounds(*i);
}





/*PROTECTED REGION ID(idlmm::ArrayDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ArrayDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getArrayDef();
}
 
