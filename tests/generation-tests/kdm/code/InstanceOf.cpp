
#include "InstanceOf.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/TemplateUnit.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::InstanceOf include) START*/
/*PROTECTED REGION END*/

InstanceOf::InstanceOf() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(InstanceOf constructor) START*/
    /*PROTECTED REGION END*/
}

InstanceOf::~InstanceOf()
{
    /*PROTECTED REGION ID(InstanceOf destructor) START*/
    /*PROTECTED REGION END*/
}

InstanceOf::to_t InstanceOf::getTo() const
{
    return e4c::returned(m_to);
}

void InstanceOf::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

InstanceOf::from_t InstanceOf::getFrom() const
{
    return e4c::returned(m_from);
}

void InstanceOf::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::InstanceOf implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InstanceOf::eClassImpl() const
{
    return CodePackage::_instance()->getInstanceOf();
}

