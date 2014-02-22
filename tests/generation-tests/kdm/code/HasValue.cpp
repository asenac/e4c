
#include "HasValue.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::HasValue include) START*/
/*PROTECTED REGION END*/

HasValue::HasValue() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(HasValue constructor) START*/
    /*PROTECTED REGION END*/
}

HasValue::~HasValue()
{
    /*PROTECTED REGION ID(HasValue destructor) START*/
    /*PROTECTED REGION END*/
}

HasValue::to_t HasValue::getTo() const
{
    return e4c::returned(m_to);
}

void HasValue::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

HasValue::from_t HasValue::getFrom() const
{
    return e4c::returned(m_from);
}

void HasValue::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::HasValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr HasValue::eClassImpl() const
{
    return CodePackage::_instance()->getHasValue();
}

