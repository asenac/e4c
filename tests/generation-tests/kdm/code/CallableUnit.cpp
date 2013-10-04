
#include "CallableUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CallableUnit include) START*/
/*PROTECTED REGION END*/

CallableUnit::CallableUnit() : 
	m_kind()
{
	/*PROTECTED REGION ID(CallableUnit constructor) START*/
	/*PROTECTED REGION END*/
}

CallableUnit::~CallableUnit()
{
	/*PROTECTED REGION ID(CallableUnit destructor) START*/
	/*PROTECTED REGION END*/
}

void CallableUnit::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

CallableUnit::kind_t CallableUnit::getKind() const
{
	return m_kind;
}



/*PROTECTED REGION ID(kdm::code::CallableUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CallableUnit::eClassImpl() const
{
	return CodePackage::_instance()->getCallableUnit();
}
 
