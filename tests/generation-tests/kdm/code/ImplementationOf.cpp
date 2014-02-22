
#include "ImplementationOf.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ImplementationOf include) START*/
/*PROTECTED REGION END*/

ImplementationOf::ImplementationOf() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ImplementationOf constructor) START*/
    /*PROTECTED REGION END*/
}

ImplementationOf::~ImplementationOf()
{
    /*PROTECTED REGION ID(ImplementationOf destructor) START*/
    /*PROTECTED REGION END*/
}

ImplementationOf::to_t ImplementationOf::getTo() const
{
    return e4c::returned(m_to);
}

void ImplementationOf::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ImplementationOf::from_t ImplementationOf::getFrom() const
{
    return e4c::returned(m_from);
}

void ImplementationOf::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::ImplementationOf implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ImplementationOf::eClassImpl() const
{
    return CodePackage::_instance()->getImplementationOf();
}

