
#include "CStructured.hpp"
#include <C/CPackage.hpp>
#include <C/CStructureContents.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CStructured include) START*/
/*PROTECTED REGION END*/

CStructured::CStructured() : 
	m_contains()
{
	/*PROTECTED REGION ID(CStructured constructor) START*/
	/*PROTECTED REGION END*/
}

CStructured::~CStructured()
{
	/*PROTECTED REGION ID(CStructured destructor) START*/
	/*PROTECTED REGION END*/
}

CStructured::contains_t CStructured::getContains() const
{
	return e4c::returned(m_contains);
}


void CStructured::addContains(C::CStructureContents_ptr contains_)
{
	contains_->setSc_container(this);
	m_contains.insert(std::unique_ptr < C::CStructureContents >(contains_));
}

void CStructured::addAllContains(const contains_t& contains_)
{
	for (auto i = contains_.begin(); i != contains_.end(); i++)
		addContains(*i);
}



/*PROTECTED REGION ID(C::CStructured implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CStructured::eClassImpl() const
{
	return CPackage::_instance()->getCStructured();
}
 
