
#include "Extends.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/Datatype.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Extends include) START*/
/*PROTECTED REGION END*/

Extends::Extends() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Extends constructor) START*/
    /*PROTECTED REGION END*/
}

Extends::~Extends()
{
    /*PROTECTED REGION ID(Extends destructor) START*/
    /*PROTECTED REGION END*/
}

Extends::to_t Extends::getTo() const
{
    return e4c::returned(m_to);
}

void Extends::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Extends::from_t Extends::getFrom() const
{
    return e4c::returned(m_from);
}

void Extends::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::Extends implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Extends::eClassImpl() const
{
    return CodePackage::_instance()->getExtends();
}

