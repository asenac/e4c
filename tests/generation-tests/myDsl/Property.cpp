
#include "Property.hpp"
#include <myDsl/MyDslPackage.hpp>
#include <myDsl/Type.hpp>

using namespace myDsl;

/*PROTECTED REGION ID(myDsl::Property include) START*/
/*PROTECTED REGION END*/

Property::Property() : 
	m_name(),
    m_type(),
    m_many()
{
	/*PROTECTED REGION ID(Property constructor) START*/
	/*PROTECTED REGION END*/
}

Property::~Property()
{
	/*PROTECTED REGION ID(Property destructor) START*/
	/*PROTECTED REGION END*/
}

void Property::setName(name_t _name)
{
	m_name = _name;;
}

Property::name_t Property::getName() const
{
	return m_name;
}

Property::type_t Property::getType() const
{
	return e4c::returned(m_type);
}

void Property::setType(type_t type_)
{
	if (m_type == type_)
		return;
	m_type = type_;
}

void Property::setMany(many_t _many)
{
	m_many = _many;;
}

Property::many_t Property::getMany() const
{
	return m_many;
}



/*PROTECTED REGION ID(myDsl::Property implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Property::eClassImpl() const
{
	return MyDslPackage::_instance()->getProperty();
}
 
