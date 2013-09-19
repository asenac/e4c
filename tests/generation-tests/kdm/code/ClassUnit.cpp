
#include "ClassUnit.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

ClassUnit::ClassUnit() : 
	m_isAbstract(),
    m_codeElement()
{
}

ClassUnit::~ClassUnit()
{
}

void ClassUnit::setIsAbstract(isAbstract_t _isAbstract)
{
	m_isAbstract = _isAbstract;;
}

isAbstract_t ClassUnit::getIsAbstract() const
{
	return m_isAbstract;
}



