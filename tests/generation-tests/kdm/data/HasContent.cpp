
#include "HasContent.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/AbstractDataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::HasContent include) START*/
/*PROTECTED REGION END*/

HasContent::HasContent() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(HasContent constructor) START*/
    /*PROTECTED REGION END*/
}

HasContent::~HasContent()
{
    /*PROTECTED REGION ID(HasContent destructor) START*/
    /*PROTECTED REGION END*/
}

HasContent::to_t HasContent::getTo() const
{
    return e4c::returned(m_to);
}

void HasContent::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

HasContent::from_t HasContent::getFrom() const
{
    return e4c::returned(m_from);
}

void HasContent::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::HasContent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr HasContent::eClassImpl() const
{
    return DataPackage::_instance()->getHasContent();
}

