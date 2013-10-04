
#include "CFunction.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CFunction include) START*/
/*PROTECTED REGION END*/

CFunction::CFunction() : 
	m_isVarArg()
{
	/*PROTECTED REGION ID(CFunction constructor) START*/
	/*PROTECTED REGION END*/
}

CFunction::~CFunction()
{
	/*PROTECTED REGION ID(CFunction destructor) START*/
	/*PROTECTED REGION END*/
}

void CFunction::setIsVarArg(isVarArg_t _isVarArg)
{
	m_isVarArg = _isVarArg;;
}

CFunction::isVarArg_t CFunction::getIsVarArg() const
{
	return m_isVarArg;
}



/*PROTECTED REGION ID(C::CFunction implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CFunction::eClassImpl() const
{
	return CPackage::_instance()->getCFunction();
}
 
