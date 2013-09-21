
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

Class::isAbstract_t Class::getIsAbstract() const
{
	return m_isAbstract;
}

Class::ownedAttribute_t Class::getOwnedAttribute() const
{
	return e4c::returned(m_ownedAttribute);
}

Class::ownedOperation_t Class::getOwnedOperation() const
{
	return e4c::returned(m_ownedOperation);
}

Class::superClass_t Class::getSuperClass() const
{
	return e4c::returned(m_superClass);
}



