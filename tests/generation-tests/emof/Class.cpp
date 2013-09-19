
#include "Class.hpp"
#include <emof/Property.hpp>
#include <emof/Operation.hpp>
#include <emof/Class.hpp>

using namespace emof;

Class::Class() : 
	m_isAbstract(),
    m_ownedAttribute(),
    m_ownedOperation(),
    m_superClass()
{
}

Class::~Class()
{
}

void Class::setIsAbstract(isAbstract_t _isAbstract)
{
	m_isAbstract = _isAbstract;;
}

isAbstract_t Class::getIsAbstract() const
{
	return m_isAbstract;
}



