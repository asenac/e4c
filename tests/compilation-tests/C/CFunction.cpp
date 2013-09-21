
#include "CFunction.hpp"

using namespace C;

CFunction::CFunction() : 
	m_isVarArg()
{
}

CFunction::~CFunction()
{
}

void CFunction::setIsVarArg(isVarArg_t _isVarArg)
{
	m_isVarArg = _isVarArg;;
}

CFunction::isVarArg_t CFunction::getIsVarArg() const
{
	return m_isVarArg;
}



