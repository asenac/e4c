
#include "Class.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Property.hpp>
#include <emof/Operation.hpp>
#include <emof/Class.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Class include) START*/
/*PROTECTED REGION END*/

Class::Class() : 
	m_isAbstract(),
    m_ownedAttribute(),
    m_ownedOperation(),
    m_superClass()
{
	/*PROTECTED REGION ID(Class constructor) START*/
	/*PROTECTED REGION END*/
}

Class::~Class()
{
	/*PROTECTED REGION ID(Class destructor) START*/
	/*PROTECTED REGION END*/
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


void Class::addOwnedAttribute(emof::Property_ptr ownedAttribute_)
{
	ownedAttribute_->setClass(this);
	m_ownedAttribute.insert(std::unique_ptr < emof::Property >(ownedAttribute_));
}

void Class::addAllOwnedAttribute(const ownedAttribute_t& ownedAttribute_)
{
	for (auto i = ownedAttribute_.begin(); i != ownedAttribute_.end(); i++)
		addOwnedAttribute(*i);
}

Class::ownedOperation_t Class::getOwnedOperation() const
{
	return e4c::returned(m_ownedOperation);
}


void Class::addOwnedOperation(emof::Operation_ptr ownedOperation_)
{
	ownedOperation_->setClass(this);
	m_ownedOperation.insert(std::unique_ptr < emof::Operation >(ownedOperation_));
}

void Class::addAllOwnedOperation(const ownedOperation_t& ownedOperation_)
{
	for (auto i = ownedOperation_.begin(); i != ownedOperation_.end(); i++)
		addOwnedOperation(*i);
}

Class::superClass_t Class::getSuperClass() const
{
	return e4c::returned(m_superClass);
}

void Class::addSuperClass(emof::Class_ptr superClass_)
{
	if (e4c::contains(m_superClass, superClass_))
		return;
	m_superClass.insert(superClass_);
}

void Class::addAllSuperClass(const superClass_t& superClass_)
{
	for (auto i = superClass_.begin(); i != superClass_.end(); i++)
		addSuperClass(*i);
}



/*PROTECTED REGION ID(emof::Class implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Class::eClassImpl() const
{
	return EmofPackage::_instance()->getClass();
}
 
