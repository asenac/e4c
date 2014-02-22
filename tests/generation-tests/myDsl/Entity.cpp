
#include "Entity.hpp"
#include <myDsl/MyDslPackage.hpp>
#include <myDsl/Entity.hpp>
#include <myDsl/Property.hpp>

using namespace myDsl;

/*PROTECTED REGION ID(myDsl::Entity include) START*/
/*PROTECTED REGION END*/

Entity::Entity() :
    m_extends(),
    m_properties()
{
    /*PROTECTED REGION ID(Entity constructor) START*/
    /*PROTECTED REGION END*/
}

Entity::~Entity()
{
    /*PROTECTED REGION ID(Entity destructor) START*/
    /*PROTECTED REGION END*/
}

Entity::extends_t Entity::getExtends() const
{
    return e4c::returned(m_extends);
}

void Entity::setExtends(extends_t extends_)
{
    if (m_extends == extends_)
        return;
    m_extends = extends_;
}

Entity::properties_t Entity::getProperties() const
{
    return e4c::returned(m_properties);
}


void Entity::addProperties(myDsl::Property_ptr properties_)
{
    m_properties.push_back(std::unique_ptr < myDsl::Property >(properties_));
}

void Entity::addAllProperties(const properties_t& properties_)
{
    for (auto i = properties_.begin(); i != properties_.end(); i++)
        addProperties(*i);
}



/*PROTECTED REGION ID(myDsl::Entity implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Entity::eClassImpl() const
{
    return MyDslPackage::_instance()->getEntity();
}

